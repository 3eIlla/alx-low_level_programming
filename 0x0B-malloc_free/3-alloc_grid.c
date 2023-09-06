#include "main.h"
/**
 * **alloc_grid - point 2 2 dimensional array of integ.
* @width: nt
* @height: nt
* Return: 2dim array
*/

int **alloc_grid(int width, int height)
{
int **tabl, il, jl;

tabl = malloc(sizeof(*tabl) * height);

if (width <= 0 || height <= 0 || tabl == 0)
{
return (NULL);
}
else
{
for (il = 0; il < height; il++)
{
tabl[il] = malloc(sizeof(**tabl) * width);
if (tabl[il] == 0)
{
 while (il == il - 1)
free(tabl[il]);
free(tabl);
return (NULL);
}
for (jl = 0; jl < width; jl++)
tabl [il][jl] = 0;
}
}
return (tabl);
}
