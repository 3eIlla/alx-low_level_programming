#include <stdio.h>
/**
*main- print no o argumen pass.
*@argc: no o commanlin argumen.
*@argv: poin 2 array o commanlin argumen.
*Return: 0-success, non-zero-fail.
*/

int main(int argc, char *argv[] _attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
