#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *alloc_grid - concatenates two strings
 * @s1: string input
 * @s2: string input
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
int **alloc_grid(int width, int height)
{
int **arr, i = 0, flag = 0;

if (width < 1 && height < 1)
{
return (NULL);
}
arr = (int **) malloc(sizeof(int *) * height);
if (arr == NULL)
{
return (NULL);
}
while (i < height)
{
arr[i] = (int *) calloc(sizeof(int) , width);
if (!arr[i])
{
flag = 1;
break;
}
i++;
}

if (flag == 1)
{
while (i > -1)
{
free(arr[i]);
i--;
}
return (free(arr));
}

return (arr);
}
