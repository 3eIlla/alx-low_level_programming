#include "main.h"
/**
 * print_line - check upper case
 *
 * @n : no. input
 * @p : input character
 *
 * return :always 0 (sucsses)
 */

void print_line(int n)
{
int p;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (p = 1; p <= n; p++)
{
_putchar(95);
}
_putchar('\n');
}

}
