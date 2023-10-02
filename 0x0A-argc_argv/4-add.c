#include <stdio.h>
#include <stdlib.h>

/**
* main - it all starts here
*
* @argc: the number of arguments
* @argv: array of pointers to arguments
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int sm = 0;
	char *cc;

while (--argc)
{
	for (cc = argv[argc]; *cc; cc++)
	{
		if (*cc > '9' || *cc < '0')
		{
			return (printf("Error\n"), 1);
		}
	}
	sm += atoi(argv[argc]);
}
printf("%d\n", sm);
return (0);
}
