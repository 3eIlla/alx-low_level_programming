#ifndef LISTS_H
#define LISTS_H


/*Libraries*/
#include <stdio.h>    /*For any out in puts */

#include <unistd.h>  /*for display the function write */

#include <stdarg.h>   /*for  */

#include <stdarg.h>   /*for argument after "..."*/

#include <limits.h>   /*for max byet no. */

#include <stdlib.h>



/* .   helper functions     . */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/* .   tasks prototypes   . */
/*0.0*/
int _putchar(char c);
/*0*/
int _strlen(char *s);
size_t print_list(const list_t *h);
/*1*/
size_t list_len(const list_t *h);
/*2*/
list_t *add_node(list_t **head, const char *str);
/*3*/
list_t *add_node_end(list_t **head, const char *str);
/*4*/
void free_list(list_t *head);
/*5*/
void _constructor(void) __attribute__ ((constructor));

#endif
