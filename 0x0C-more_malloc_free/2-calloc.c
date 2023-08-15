#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: size of array
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		arr[b] = 0;
	return (arr);
}
