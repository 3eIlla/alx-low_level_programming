#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - rund passW 101 crackme
 *
 * Return: always 0 (succes)
 *
 */

int main(void)
{
	int sm;
	char ch;

	srand(time(NULL));
	while (sm <= 2645)
	{
		ch = rand() % 128;
		sm += ch;
		putchar(ch);
	}
	putchar(2772 - sm);
	return (0);
}
