#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 * Return: pointer to concat result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		while (s1[x])
		x++;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		while (s2[y])
		y++;
	}
	if (y > n)
	    y = n;

	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		s[z] = s1[z];

	for (z = 0; z < y; z++)
		s[z + x] = s2[z];

	s[x + y] = '\0';
	return (s);
}
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
