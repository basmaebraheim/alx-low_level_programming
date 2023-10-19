#include "lists.h"

/**
 * _strlen - get string length
 * @str: string
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
