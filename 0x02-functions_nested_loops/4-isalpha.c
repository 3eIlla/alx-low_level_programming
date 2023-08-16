#include "main.h"
/**
 * _isalpha - check the alphabetic char
 *
 * @c: takes input from other function
 *
 * Description: _isalpha utilizes on the _putchar function.
 *
 * Return: 1 = c is alphabet.
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
