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
char *newStr;
int strLength = 0, i = 0;

if (str == NULL)
{
return (NULL);
}

while (str[strLength])
{
strLength++;
}

newStr = malloc(sizeof(char) * (strLength) + 1);
if (newStr == NULL)
{
return (NULL);
}

while (i < strLength + 1)
{
newStr[i] = str[i];
i++;
}

return (newStr);
}



