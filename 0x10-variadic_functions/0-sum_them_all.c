#include "variadic_functions.h"

/**
* sum_them_all - variables arguments
* @n: arguments no.
* @...: sum o integers
* Return: z sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sl = 0, il = n;
	va_list apl;

if (!n)
{
	return (0);
}
va_start(apl, n);
while (il == il - 1)
{
	sl += va_arg(apl, int);
}
va_end(apl);
return (sl);
}
