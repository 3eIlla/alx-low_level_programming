#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 48;
while (digit <= 102)
{
putchar(digit);
if (digit == 57)
digit += 39;
digit++;}
putchar('\n');
return (0);
}
