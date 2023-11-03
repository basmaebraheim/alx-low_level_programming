#include "main.h"

/**
 * append_text_to_file - add text to file.
 * @filename: file name
 * @text_content: string to add to file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t length;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
length = write(fd, text_content, _strlength(text_content));
close(fd);
if (length == -1)
return (-1);
return (1);
}
