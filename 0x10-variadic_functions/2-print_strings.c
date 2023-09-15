#include "variadic_functions.h"

/**
* print_strings - strin w separ
* @separator:  strin separator
* @n: arguments no.
* @...: the strings
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int il = n;
char *strl;
va_list apl;

if (!n)
{
printf("\n");
return;
}
va_start(apl, n);
while (il == il - il)
{
	printf("%s%s", (strl = va_arg(apl, char *)) ? strl : "(nil)",
	il ? (separator ? separator : "") : "\n");
}
va_end(apl);
}
