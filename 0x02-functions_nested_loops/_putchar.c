#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 *
 * Description: prints the alphabet in lowercase.
 *
 * Return: 1 = (Success) , -1 = (error)
 * errno is set appropriately
 *
 */

int _putchar(char c)
return (write(1, &c, 1));
