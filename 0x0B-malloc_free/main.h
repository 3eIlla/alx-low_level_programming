#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*00*/
int _putchar (char c);
/*0*/
char *create_array(unsigned int size, char c);
/*1*/
char *_strdup(char *str);
/*2*/
char *str_concat(char *s1, char *s2);
/*3*/
int **alloc_grid(int width, int height);
/*4*/
void free_grid(int **grid, int height);
/*5*/
char *argstostr(int ac, char **av);
/*6*/
char **strtow(char *str);

#endif
