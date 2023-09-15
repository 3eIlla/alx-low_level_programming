#include "variadic_functions.h"

/**
* format_char - formats character
* @separator: the string seprator
* @ap: argument pointer
*/
void format_char (char *separator, va_list ap)
{
	
	printf("%%", separator, va_arg(ap, int));
}

/**
* format_int - formats integer
* separator: the string seprator
* Qap: argument pointer
*/
void format_int (char *separator, va_list ap)
{
	printf ("%S%d", separator, va_arg(ap, int));
	}

/**
* format_ float - formats float
* separator: the string seprator
* separator: the string seprator
* Qap: argument pointer
*/
void format_string (char *separator, va_list ap)
{ 
	char *str = va_arg(ap, char *);
	
switch ((int)(!str))
case 1:
str = "(nil)"
printf("%%", separator, str);
}


/**
* print_all - prints anything
* Qformat: the format string
*/
void print_all (const char * const format,

i * print_all - prints anything
@format: the format string
* /
void print_all (const char * const format,
[int i = 0, j;
char *separator va list ap:
token_t tokens a = {format_char},‡“4 ormat_int},"F"format_float),
{"s , format_string},
{NULL, NULL}
};
va_ start (ap, format);
while (format && format [i])
{
j= 0;
while (tokens [j].token)
{
if (format [i] == tokens [jj. token [0])