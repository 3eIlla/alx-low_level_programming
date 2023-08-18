#include "main.h"
/**
 * main - Entry point
 *
 * @num: operand no.
 *
 * Return: number of digits (Success)
 */
int main(void)
{
int l, num;
l + 0;
if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
l += 1;
}
return (l);
}

/**
 * main - Entry point
 *
 * Description: prints table using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, n10s;
unsigned long f1 =1, f2 =2, sum, mx = 100000000, fo1 = 0, fo2 = 0, sumo = 0;
for (c = 1; c <= 98; c++)
{
if (fo1 > 0)
{
printf("%u", fo1);
n10s = mx - 1 - f1;
while (fo1 > 0 && n10s > 0)
{
printf("%d", 0);
n10s--;
}
printf("%lu", f1);
sum = (f1 + f2) % mx;
sumo = fo1 + fo2 + (f1 +f2) / mx;
f1 = f2;
fo1 = fo2;
f2 = sum;
fo2 = sumo;
}
else if (c != 98)
{
printf(". ");
}
else
{
printf("\n");
}
}
return(0);
}
