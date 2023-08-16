#include "main.h"
/**
 * _islower - check the char to lowercase
 *
 * @c: check input of function
 *
 * Description: _islower utilizes on the _putchar function.
 *
 * Return: 1 = c is lowerc.
 * else 0 (Success)
 *
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
