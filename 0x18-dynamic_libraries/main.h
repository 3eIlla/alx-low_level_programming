#ifndef MAIN_H
#define MAIN_H


/*Libraries*/
#include <stdio.h>    /*For any out in puts */

#include <unistd.h>  /*for display the function write */

#include <stdarg.h>   /*for  */

#include <stdarg.h>   /*for argument after "..."*/

#include <limits.h>   /*for max byet no. */

#include <stdlib.h>

#include <string.h>     /* for startup */

#include <fcntl.h>      /* for functionality */


/* .    All prev 0.0 protos   . */

/*alx"s*/
void _puts(char *s);

/*all ints*/
int _putchar(char c);
int _strlen(char *s);
int _atoi(char *s);
int _abs(int n);

int _islower(int c);
int _isalpha(int c);
int _isupper(int c);
int _isdigit(int c);

int _strcmp(char *s1, char *s2);


/*all chars*/
char *_strcpy(char *dest, char *src);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);

char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strstr(char *haystack, char *needle);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);



/*add*/
unsigned int _strspn(char *s, char *accept);

#endif
