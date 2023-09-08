#ifndef MAIN_H
 #define MAIN_H

#include <stdlib.h>
#include <unistd.h>
/*00*/
int _putchar (char c); 
void _puts(char *str);
int atoi(const char *s);

/*1*/
void *malloc_checked(unsigned int b);
/*2*/
char *string_nconcat (char *s1, char *s2, unsigned int n);
/*3*/
void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);
/*4*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/*5*/
void print_int(unsigned long int n);


#endif