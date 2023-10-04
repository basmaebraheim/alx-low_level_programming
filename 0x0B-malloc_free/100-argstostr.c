#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all arguments of the program.
*@ac: argument count.
*@av: pointer to array of size ac.
*Return: NULL if ac == 0 or av == null, Pointer to new string.
*NULL on fail.
*/
char *argstostr(int ac, char **av)
{
int i, j, k, newStrSize;
char *newStr;

newStrSize = 0;
if (ac == 0 || av == NULL)
return (NULL);
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
newStrSize++;
j++;
}
newStrSize++;
i++;
}
newStr = malloc((sizeof(char) * newStrSize) +1);
if (newStr == NULL)
return (NULL);
i = 0;
k = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
newStr[k] = av[i][j];
j++;
k++;
}
newStr[k] = '\n';
k++;
i++;
}
newStr[k] = '\0';
return (newStr);
}
