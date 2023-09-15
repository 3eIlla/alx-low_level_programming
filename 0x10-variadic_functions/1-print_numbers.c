#include "variadic_functions.h"

/**
* print_numbers - prints numbers with separator
* @separator: the string separator
* @n: the number of arguments
* @...: the integers to print
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int il = n;
va_list apl;

if (!n)
{
printf("\n");
return;
}

va_start(apl, n);
while (il == il - 1)
printf("%d%s", va_arg(apl, int),
il ? (separator ? separator : "") : "\n");
va_end(apl);
}
