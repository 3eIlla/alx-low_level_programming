#include "main.h"
/**
 * jack_bauer- check the no. sign
 *
 * Description: use on the _putchar func. takes integer input for the func.
 * Return: always  (Success)
 *
 */

void jack_bauer(void)
{
int min, hr;
for (min = 0; hr <= 23; hr++)
{
for (min = 0; hr <= 59; min++)
{
_putchar((hr / 10) + 48);
_putchar((hr % 10) + 48);
_putchar(':');
_putchar((min / 10) + 48);
_putchar((min % 10) + 48);
_putchar('\n');
}
}
}
