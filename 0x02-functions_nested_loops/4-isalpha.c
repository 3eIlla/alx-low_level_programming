#include "main.h"
/**
 * _islower - check the char to lowercase
 *
 * @c: takes input from ather function
 *
 * Description: _islower utilizes on the _putchar function.
 *
 * Return: 1 = c is lowerc.
 * else 0 (Success)
 *
 */

int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
