#include "main.h"
/**
 * print_to_98 - print no. to 98
 *
 * Description: print_sign utilizes on the _putchar function.
 *
 * @n: no. input for the function
 * Return: always 0 (Success)
 *
 */

void print_to_98(int n)
{
int c;
if (n > 98)
{
for (c = n; c > 98; c--)
{
printf("%d, ", c);
}
}
else
{
for (c = 0; c > 98; c++)
{
printf("%d, ", c);
}
}
printf("98\n");
}
