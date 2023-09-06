#include "main.h"
/**
* _strlen - length o strin
* @s: strin
*Return: nt
*/
int _strlen(char *s)
{
int sz;
for (sz = 0; s[sz] != '\0'; sz++)
;
return (sz);
}
/**
* *argstostr - descrip
* @ac: nt
* @av: argumen
* Return: strin
*/
char *argstostr(int ac, char **av)
{
int il, jl = 0;
int ncc = 0, cmplt = 0;
char *s;

if (ac == 0 || av == NULL)
{
	return (NULL);
}
for (il = 0; il < ac; il++, ncc++)
{
	ncc += _strlen(av[il]);
}
s = malloc(sizeof(char) * ncc + 1);
if (s == 0)
{
	return (NULL);
}
for (il = 0; il < ac; il++)
{
for (jl = 0; av[il][jl] != '\0'; jl++, cmplt++)
{
	s[cmplt] = av[il][jl];
}
s[cmplt] = '\n';
cmplt++;
}
s[cmplt] = '\0';
return (s);
}
