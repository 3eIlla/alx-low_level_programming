#include "main.h"
/**
 * print_triangle- check upper case
 *
 * @h : no. input
 * @b : input of no.
 *
 * return :always 0 (sucsses)
 */

void print_triangle(int size)
{
int h, b;
if (size <= 0)
{
    _putchar('\n');
}
else
{
    for (h = 0; h <= size; h++)
    {
        for (b = 1; b <= size; b++)
        {
            if ((h + b) <= size)
            {
                _putchar(' ');
            }
            else
            {
                _putchar('#');
            }
        }
        _putchar('\n');
    }
    
}

}
