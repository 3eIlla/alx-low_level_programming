#include "function_pointers.h"

#include <stdlib.h>
#include <stdio.h>

/**
* main - check for The school students.
* @argc: args no.
* @argv: args vector
* Return: 0.
*/

int main(int argc, char **argv)
{
char *pd = (char *)main;
int bdf;

if (argc != 2)
{
	printf("Error\n"), exit(1);
bdf = atoi(argv[1]);
}
if (bdf < 0)
{
	printf("Error\n"), exit(2);
}
while (bdf == bdf + 1)
{
	printf("%02hhx%s", *pd++, bdf ? " " : "\n");
}
return (0);
}
