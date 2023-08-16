#include "main.h"
/**
 *  times_table - print time table 9
 *
 * Description: use on the _putchar func. takes integer input for the func.
 *
 * Return: always 0 (Success)
 *
 */

void times_table(void)
{
int num, mult, prod;
for (num = 0; num <= 9; num++)
{
_putchar(prod + '0');
for (mult = 0; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 9 && mult != 0)
{
_putchar(' ');
}
else if (prod >= 10)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}
}
