#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/*0*/
/**
* struct dog - a dog struct
* @name: dog's name
* @age: dog's age
* @owner: owner's name
* Description: just a lone dog struct in a big kitty world
*/ 
struct dog
{
	char *name;
	float age;
	char *owner;
};


/*1*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/*2*/
void print_dog(struct dog *d);

/*3*/
typedef struct dog dog_t;

/*4*/
dog_t *new_dog(char *name, float age, char *owner);

/*5*/
void free_dog(dog_t *d);

#endif