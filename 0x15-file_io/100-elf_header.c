#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - display information from ELF header
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char *argv[])
{
    int fd, i;
    char elf[16];

    if (argc != 2)
    {
        dprintf(2, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    if (read(fd, elf, 16) != 16)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    printf("ELF Header:\n  Magic:   ");
    for (i = 0; i < 16; i++)
    {
        printf("%02x", elf[i]);
        if (i < 15)
            printf(" ");
    }
    printf("\n  Class:                             ELF");
    lseek(fd, 1, SEEK_SET);
    read(fd, elf, 1);
    printf("%c", elf[0]);
    printf("\n  Data:                              2's complement, ");
    read(fd, elf, 1);
    if (elf[0] == 1)
        printf("little endian\n");
    else
        printf("big endian\n");
    lseek(fd, 4, SEEK_CUR);
    read(fd, elf, 2);
    printf("  Version:                           %d (current)\n", elf[0]);
    read(fd, elf, 2);
    printf("  OS/ABI:                            UNIX - ");
    if (elf[0] == 0)
        printf("System V\n");
    else if (elf[0] == 3)
        printf("Linux\n");
    else if (elf[0] == 6)
        printf("Solaris\n");
    else if (elf[0] == 7)
        printf("AIX\n");
    else if (elf[0] == 8)
        printf("IRIX\n");
    else if (elf[0] == 9)
        printf("FreeBSD\n");
    else if (elf[0] == 10)
        printf("Tru64\n");
    else if (elf[0] == 11)
        printf("Novell Modesto\n");
    else if (elf[0] == 12)
        printf("OpenBSD\n");
    else if (elf[0] == 13)
        printf("OpenVMS\n");
    else if (elf[0] == 14)
        printf("NonStop Kernel\n");
    else if (elf[0] == 15)
        printf("AROS\n");
    else
        printf("<unknown: %d>\n", elf[0]);
    read(fd, elf, 1);
    printf("  ABI Version:                       %d\n", elf[0]);
    lseek(fd, 6, SEEK_CUR);
    read(fd, elf, 2);
    printf("  Type:                              ");
    if (elf[0] == 1)
        printf("REL (Relocatable file)\n");
    else if (elf[0] == 2)
        printf("EXEC (Executable file)\n");
    else if (elf[0] == 3)
        printf("DYN (Shared object file)\n");
    else if (elf[0] == 4)
        printf("CORE (Core file)\n");
    else
        printf("<unknown: %d>\n", elf[0]);
    lseek(fd, 24, SEEK_CUR);
    read(fd, elf, 8);
    printf("  Entry point address:               0x");
    for (i = 7; i >= 0; i--)
    {
        if (elf[i] != 0)
            break;
    }
    for (; i >= 0; i--)
    {
        printf("%x", elf[i]);
    }
    printf("\n");
    close(fd);

    return (0);
}
