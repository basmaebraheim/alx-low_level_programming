#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *alloc_grid - generate grid by width & height
 * @widh: height input
 * @height: width input
 *
 * Return: pointer to grid
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
arr[i] = (int *) calloc(sizeof(int), width);
if (arr[i] == NULL)
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
free(arr);
return (NULL);
}

return (arr);
}
