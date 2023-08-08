#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *alloc_grid - get pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 *
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
int **arr, i = 0;

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
i++;
}
return (arr);
}

