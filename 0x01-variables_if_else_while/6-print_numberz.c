#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit <=9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
