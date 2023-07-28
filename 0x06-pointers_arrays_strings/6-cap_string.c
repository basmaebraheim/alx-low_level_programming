#include "main.h"

/**
 * cap_string - capitalize words of a string
 * @s: string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	if (s[0] >= 'a' && s[0] <= 'z')
	  s[0] -= 32;
	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
