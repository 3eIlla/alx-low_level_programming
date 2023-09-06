#include <stdio.h>
/**
*main- print sum o 2 no.
*@argc: no. of commandline argumen.
*@argv: pointer 2 array o commanlin argumen.
*Return: 0-success, non-zero-fail.
*/
int main(int argc, char *argv[])
{
	int sm;

if (argc == 3)
{
sm = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sm);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
