#include <stdlib.h>
#include "main.h"

/**
 * *alloc_grid - generate grid by width & height
 * @width: height input
 * @height: width input
 *
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
int **grid, i = 0, j =0;

if (width < 1 && height < 1)
{
return (NULL);
}
grid = (int **) malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
while (j < width)
{
grid[i][j] = 0;
j++;
}
return (grid);
}
