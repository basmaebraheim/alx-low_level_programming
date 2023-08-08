#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copy string to new location.
 * @str: string input to copy
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *strCopy;
int length, i = 0;

if (!*str)
{
return (NULL);
}
length = getStringLength(str);
strCopy = (char *) malloc(length);
if (!*strCopy)
{
return (NULL);
}
while (i < length)
{
strCopy[i] = str[i];
}
return (strCopy);
}

/**
 * *getStringLength - get string length
 * @str: string to get length
 *
 * Return: string length
 */
int getStringLength(char *str)
{
int i = 0;
while (str[i])
{
i++;
}
return (i);
}
