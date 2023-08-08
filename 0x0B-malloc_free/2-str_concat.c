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
char *s3;
int length1 = 0, length2 = 0, i = 0;

while (s1 && s1[length1])
{
length1++;
}
while (s2 && s2[length2])
{
length2++;
}

s3 = malloc(sizeof(char) * (length1 + length2 + 1));
if (s3 == NULL)
{
return (NULL);
}

while (s1 && i < length1)
{
s3[i] = s1[i];
i++;
}
while (s2 && i < (length1 + length2))
{
s3[i] = s2[i - length2];
i++;
}
s3[i] = '\0';
return (s3);
}




