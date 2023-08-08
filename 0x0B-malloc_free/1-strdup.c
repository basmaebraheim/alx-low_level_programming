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
int length = 0, i = 0;

if (str == NULL)
{
return (NULL);
}

while (str[length])
{
length++;
}

strCopy = malloc(sizeof(char) * (length + 1));
if (strCopy == NULL)
{
return (NULL);
}

while (i < length + 1)
{
strCopy[i] = str[i];
i++;
}

return (strCopy);
}



