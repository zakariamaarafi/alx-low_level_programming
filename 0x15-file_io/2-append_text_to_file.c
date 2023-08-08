#include "main.h"

/**
 * append_text_to_file - append text at the end.
 * @filename: points to the name of file.
 *
 * @text_content:string to add to the end of the file.
 *
 * Return: f the function fails or filename is null -1.
 * if the file does not exist the user lacks write permissions -1.
 * if not - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, w;
    int len = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[len])
            len++;
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    w = write(fd, text_content, len);

    if (fd == -1 || w == -1)
        return (-1);

    close(fd);

    return (1);
}
