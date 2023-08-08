#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: grid to free
 * @height: height of grid free
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}

/**
 * *alloc_grid - generate grid by width & height
 * @width: height input
 * @height: width input
 *
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
int **arr, i = 0;

if (width < 1 && height < 1)
{
return (NULL);
}
arr = malloc(sizeof(int *) * height);
if (arr == NULL)
{
return (NULL);
}
while (i < height)
{
arr[i] = calloc(sizeof(int), width);
if (arr[i] == NULL)
{
free_grid(arr, height);
return (NULL);
}
i++;
}
return (arr);
}
