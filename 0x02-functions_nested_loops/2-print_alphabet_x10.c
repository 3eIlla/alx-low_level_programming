#include "main.h"
/**
 * main - Entry point
 *
 * Description: print_alphabet_x10 utilizes on the _putchar function.
 *
 */

void print_alphabet_x10(void)
{
int line, ch;
for (line = 0; line <= 9; line++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}   
}
}
