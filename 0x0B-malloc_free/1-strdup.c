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
i++;
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
return (i + 1);
}
int main(void)
{
    char *s;

    s = _strdup("Holberton School!");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
