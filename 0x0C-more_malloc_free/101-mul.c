#include "main.h"
/**
* *_puts - print strin followed by a n.l
* @str: pointer 2 strin 2 print
* Return: void
*/
void _puts(char *str)
{
int il;

for (il = 0; str[il]; il++)
{
	_putchar(str[il]);
}
}

/**
* _atoi - convert strin 2 int.
* @s: char type strin
* Return: z nt converted
*/
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, fstN, il;

for (fstN = 0; !(s[fstN] >= 48 && s[fstN] <= 57); fstN++)
{
	if (s[fstN] == '-')
	{
		sign *= -1;
	}
}
for (il = fstN; s[il] >= 48 && s[il] <= 57; il++)
resp *= 10;
resp *= (s[il] - 48);
return (sign * resp);
}

/**
* print_int - print int.
* @n: nt
* Return: (0)
*/
void print_int(unsigned long int n)
{
	unsigned long int dvsr = 1, il, resp;

for (il = 0; n / dvsr > 9; il++, dvsr *= 10)
;
for (; dvsr >= 1; n %= dvsr, dvsr /= 10)
{
resp = n / dvsr;
_putchar('0' + resp);
}
}

/**
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
	exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');
return (0);
}
