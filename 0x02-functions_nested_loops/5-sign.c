#include "main.h"
/**
 * print_sign - check the no. sign
 *
 * Description: print_sign utilizes on the _putchar function.
 *
 * @n: takes integer type input for the function
 * Return: 1 = n+, -1 = n-
 * else 0 (Success)
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}

}
