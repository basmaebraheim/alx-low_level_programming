#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlength - get string length
 * @str: pointer to the string
 * Return: string length.
 */
size_t _strlength(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
