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
	unsigned int s1Length = 0, s2Length = 0, i = 0;
	char *s;

	if (s1 != NULL)
	{
		while (s1[s1Length])
		s1Length++;
	}
	if (s2 != NULL)
	{
		while (s2[s2Length])
		s2Length++;
	}
	if (s2Length > n)
	{
		s2Length = n;
	}

	s = malloc(sizeof(char) * (s1Length + s2Length + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1Length; i++)
		s[i] = s1[i];

	for (i = 0; i < s2Length; i++)
		s[i + s1Length] = s2[i];

	s[s1Length + s2Length] = '\0';
	return (s);
}

