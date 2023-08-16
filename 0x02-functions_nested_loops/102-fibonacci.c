#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints table using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
unsigned long fib1 = 0, fib2 = 1, sum;
for (c = 0; c < 50; c++)
{
suum = fib1 + fib2;
printf("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (c == 49)
{
printf("\n");
}
else
{
printf(",")
}
}
return (0);
}
