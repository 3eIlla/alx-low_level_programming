#include "main.h"

/**
 * print_chessboard - concact. 2 the string
 *
 * @a: pointer to destnation input
 *
 * Return: nothin
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
