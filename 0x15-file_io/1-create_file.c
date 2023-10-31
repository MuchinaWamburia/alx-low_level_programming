#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file with specific permissions and writes content
 * @filename: the name of the file to create
 * @text_content: the text to write to the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, write_result, length;

    if (filename == NULL)
        return (-1);

    /*Create the file or open it if it already exists*/
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    /*If text_content is not NULL, write the text to the file*/
    if (text_content)
    {
        for (length = 0; text_content[length]; length++)
            ;

        write_result = write(fd, text_content, length);
        if (write_result == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
