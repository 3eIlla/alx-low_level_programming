#include "main.h"

/**
* free_grid - free z grid
* @grid: grid o memo
* @height: nt
* Return: void
*/

void free_grid(int **grid, int height)
{
int l;
for (l = 0; l < height; l++)
free(grid[l]);
free(grid);
}
