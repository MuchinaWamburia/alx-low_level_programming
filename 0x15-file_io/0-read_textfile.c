#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes_read, bytes_written;
    char *buffer;

    if (filename == NULL)
        return (0);

    // Open the file for reading
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    // Allocate memory for a buffer
    buffer = malloc(letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    // Read from the file
    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    // Write to standard output
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    // Clean up and close the file
    close(fd);
    free(buffer);

    if (bytes_written == -1)
        return (0);

    return (bytes_written);
}
