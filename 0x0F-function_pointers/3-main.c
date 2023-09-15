#include "3-calc.h"

/**
* main - check the code for The school students.
* @argc: args no.
* @argv: argument vector
* Return: 0.
*/

int main(int argc, char **argv)
{
	int (*op_func)(int, int), adf, bdf;

if (argc != 4)
{
	printf("Error\n"), exit(98);
adf = atoi(argv[1]);
bdf = atoi(argv[3]);
op_func = get_op_func(argv[2]);
}
if (!op_func)
{
	printf("Error\n"), exit(99);
}
if (!bdf && (argv[2][0] == '%' || argv[2][0] == '/'))
{
	printf("Error\n"), exit(100);
	printf("%d\n", op_func(adf, bdf));
}
return (0);
}
