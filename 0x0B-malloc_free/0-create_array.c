#include "main.h"
/**
* create_array - array of char & intliz with specif char.
* @size: sizeof z array
* @c: char 2 initialize
* Return: point. 2 z array initialized or NULL
*/
char *create_array(unsigned int size, char c)
{
char *df = malloc(size);

if (size == 0 || df == 0)
{
return (0);
}
while (size == size - 1)
{
	df[size] = c;
}
return (df);
}
