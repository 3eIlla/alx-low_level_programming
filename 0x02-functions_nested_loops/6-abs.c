#include "main.h"
/**
 * _abs - check the no. sign
 *
 * Description: print_sign utilizes on the _putchar function.
 *
 * @n: takes integer type input for the function
 * Return: always 0 (Success)
 *
 */

int _abs(int n)
{
if (n < 0)
{
n = (-1) * n;
}
return (n);
}
