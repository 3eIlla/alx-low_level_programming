#include "main.h"
/**
 * main - print no. & fizz & buzz
 *
 * @n : no. input
 *
 * return :always 0 (sucsses)
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("FizzBuzz");
    }
    else if (n % 3 == 0 && (n % 5) != 0)
    {
        printf("Fizz");
    }
   else if (n % 5 == 0 && (n % 3) != 0)
    {
        printf("Buzz");
    }
    else
    {
        printf("%d", n);
    }
if (n != 100)
{
    printf(" ");
}
else
{
   printf("\n"); 
}
}
return (0);
}
