#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string input
 * @s2: string input
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *concatStr;
int length1 = 0, length2 = 0, i = 0;

while (s1 && s1[length1])
{
length1++;
}
while (s2 && s2[length2])
{
length2++;
}

concatStr = malloc(sizeof(char) * (length1 + length2 + 1));
if (concatStr == NULL)
{
return (NULL);
}
while (s1 && i < length1)
{
concatStr[i] = s1[i];
i++;
}

while (s2 && i < (length1 + length2))
{
concatStr[i] = s2[i - length1];
i++;
}

concatStr[i] = '\0';
return (concatStr);
}
