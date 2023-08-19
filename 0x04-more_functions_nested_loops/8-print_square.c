#include "main.h"
/**
 * print_square - print # in a patren
 *
 * @n : no. input
 *
 * return :always 0 (sucsses)
 */

void print_square(int size)
{
int r, c;
for (r = 1; r <= size; r++)
{
for (c = 1; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}

}
