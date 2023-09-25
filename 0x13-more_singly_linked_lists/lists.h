#ifndef LISTS_H
#define LISTS_H
/*Libraries*/
#include <stdio.h>    /*For any out in puts */

#include <unistd.h>  /*for display the function write */

#include <stdarg.h>   /*for  */

#include <stdarg.h>   /*for argument after "..."*/

#include <limits.h>   /*for max byet no. */

#include <stdlib.h>

#include <string.h>     /* for startup */



/**
 * struct listint_s - solo linked list
 * @n: int
 * @next: points 2 nxt node
 *
 * Description: solo linked list nod structure 4 Holberton proj.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/*0.0*/
int _putchar(char c);
int _strlen(char *s);

/*0*/
size_t print_listint(const listint_t *h);
/*1*/
size_t listint_len(const listint_t *h);
/*2*/
listint_t *add_nodeint(listint_t **head, const int n);
/*3*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*4*/
void free_listint(listint_t *head);
/*5*/
void free_listint2(listint_t **head);
/*6*/
int pop_listint(listint_t **head);
/*7*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*8*/
int sum_listint(listint_t *head);
/*9*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/*10*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/*11*/
listint_t *reverse_listint(listint_t **head);
/*12*/
size_t print_listint_safe(const listint_t *head);
/*13*/
size_t free_listint_safe(listint_t **h);
/*14*/
listint_t *find_listint_loop(listint_t *head);

#endif
