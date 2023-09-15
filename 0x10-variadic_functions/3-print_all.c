#include "variadic_functions.h"

/**
* format_char - formats character
* @separator: the string seprator
* @ap: argument pointer
*/
void format_char (char *separator, va_list ap)
{
	
	printf("%s%c", separator, va_arg(ap, int));
}

/**
* format_int - formats integer
* separator: the string seprator
* @ap: argument pointer
*/
void format_int(char *separator, va_list ap)
{
	printf ("%s%d", separator, va_arg(ap, int));
	}

/**
* format_ float - formats float
* separator: the string seprator
* @ap: argument pointer
*/
void format_float(char *separator, va_list ap)
{
	printf ("%s%f", separator, va_arg(ap, double));
}

/**
* format_float - formats float
* separator: the string seprator
* @ap: argument pointer
*/
void format_string (char *separator, va_list ap)
{ 
	char *str = va_arg(ap, char *);

switch ((int)(!str))
case 1:
str = "(nil)";
printf("%s%s", separator, str);
}

/**
* print_all - prints anythn
* @format: z format strin
*/

void print_all(const char * const format, ...)
{
	int il = 0, jl;
	char *separator = "";
	va_list app;

	token_t tokens[] = {
		{"c" = format_char},
		{"i" = format_int},
		{"f" = format_float},
		{"s" = format_string},
		{NULL, NULL}
		};

va_start(ap, format);
while (format && format[il])
{
	jl = 0;
	while (tokens[jl].token)
	{
	if (format[il] == tokens[jl].token[0])
	{
		tokens [j].f(separator, ap);
		separator =
	} 
		jl = jl + 1;
	}
	il = il + 1;
}
printf("\n");
va_end(app);
}
