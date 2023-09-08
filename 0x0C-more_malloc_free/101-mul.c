#include "main.h"
/**
*-puts - print strin followed by a n.l
* @str: pointer 2 strin 2 print
* Return: void
*/
void _puts (char *str)
{
int il;

for (il = 0; str[il]; il++)
{
	_putchar(str[il]);
}
}



/*
* main - prin z multip. result followed by n.l
* @argc: nt
* @argv: list
* Return: (0)
*/
int main(int argc, char const *argv[])
{
	(void)argc;

if (argc != 3)
{
	_puts("Error");
	exit (98);
}
print_int(atoi(arg[1]) *_atoi(argv[2]));
_putchar('\n');
return (0);
}
