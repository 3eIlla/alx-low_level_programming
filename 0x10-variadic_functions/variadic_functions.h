#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

/**
* struct token - token
* @token: format
* @f: funct associat
*/

typedef struct token
{
char *token;
void (*f)(char *, va_list);
} token_t;

/*1*/
int sum_them_all(const unsigned int n, ...);
/*2*/
void print_numbers(const char *separator, const unsigned int n, ...);
/*3*/
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
