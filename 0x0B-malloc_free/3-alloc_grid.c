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
int **grid, i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

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
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
