#include "main.h"
/**
 * print_last_digit - check the no. sign
 *
 * Description: print_sign utilizes on the _putchar function.
 *
 * @n: takes integer type input for the function
 * Return: ld (Success)
 *
 */

int print_last_digit(int n)
{
int ld;
if (n < 0)
{
ld = -n;
ld = n % 10;
}
else
{
ld = -ld
_putchar(ld + '0');
}
return (ld);
}
