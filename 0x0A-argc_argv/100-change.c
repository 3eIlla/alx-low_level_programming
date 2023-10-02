#include <stdio.h>
#include <stdlib.h>

/**
*main- z minim no. coins 2 change amount o money.
*
* @argc: no. of commandline arguments.
* @argv: pointer 2 array of commanlin argumen.
*
*Return: 0-success, non-zero-fail
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int lil, ltts = 0, mon = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (lil = 0; lil < 5; lil++)
	{
		if (mon >= cents[lil])
		{
			ltts += mon / cents[lil];
			mon = mon % cents[lil];
			if (mon % cents[lil] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", ltts);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
