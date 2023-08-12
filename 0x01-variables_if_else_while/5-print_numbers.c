#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;
    while (digit <= 9)
    {
        printf("%i", digit);
        digit++;
    }
    printf("\n")
    return (0);
}