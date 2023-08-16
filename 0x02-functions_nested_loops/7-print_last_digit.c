#include "main.h"
/**
 * _abs - check the no. sign
 *
 * Description: print_sign utilizes on the _putchar function.
 *
 * @n: takes integer type input for the function
 * Return: ld (Success)
 *
 */

int print_last_digit(int)
{
int ld;
if (n < 0)
{
ld = -1 * (n % 10);
}
else
{
ld = n % 10;
_putchar(ld + '0');
}
return (ld);
}
