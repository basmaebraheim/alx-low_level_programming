#include "main.h"
/**
 * read_textfile - print text file to stdoout
 * @filename: name of the file.
 * @letters: The number of letters to print
 * Return: the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *txt;

if (filename == NULL)
return (0);

txt = malloc(sizeof(char) * letters);
if (txt == NULL)
return (0);

o = open(filename, O_RDONLY);
if (o == -1)
{
free(txt);
return (0);
}
r = read(o, txt, letters);
w = write(STDOUT_FILENO, txt, r);

if (r == -1 || r == -1 || w != r)
{
free(txt);
return (0);
}

free(txt);
close(o);

return (w);
}
