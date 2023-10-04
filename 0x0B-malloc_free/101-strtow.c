#include <stdlib.h>
#include "main.h"

/**
 * getStringWordCount - get count of words
 * @s: string
 *
 * Return: number of words
 */
int getStringWordCount(char *s)
{
int flag, i, wordCount;

flag = 0;
wordCount = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
wordCount++;
}
}

return (wordCount);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **strArr, *subStr;
int i, k = 0, strLength = 0, wordCount, c = 0, start, end;

while (*(str + strLength))
strLength++;
wordCount = getStringWordCount(str);
if (wordCount == 0)
return (NULL);

strArr = (char **) malloc(sizeof(char *) * (wordCount + 1));
if (strArr == NULL)
return (NULL);

for (i = 0; i <= strLength; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
subStr = (char *) malloc(sizeof(char) * (c + 1));
if (subStr == NULL)
return (NULL);
while (start < end)
*subStr++ = str[start++];
*subStr = '\0';
strArr[k] = subStr - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

strArr[k] = NULL;

return (strArr);
}
