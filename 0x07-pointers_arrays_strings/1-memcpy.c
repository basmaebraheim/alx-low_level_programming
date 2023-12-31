#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @n: number of bytes
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: a pointer to the memory area @s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
