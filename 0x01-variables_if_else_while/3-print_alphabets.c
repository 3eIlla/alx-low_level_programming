#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the alphabet in lowercase, then in uppercase,followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char ch = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (ch <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
