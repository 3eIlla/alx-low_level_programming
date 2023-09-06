#include "main.h"

/**
*_strlen - length of strin
* @s: strin
* Return: int.
*/

int _strlen(char *s)
{
int sz;

for (sz = 0; s[sz] != '\0'; sz++);
return (sz);
}

/**
* *str_concat - concatenat 2 strin
* @s1: strin1
* @s2: strin2
* Return: point.
*/

char *str_concat (char *s1, char *s2)
{
int sz1, sz2, i;
char *mo;

if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
sz1 = _strlen(s1);
sz2 = _strlen(s2);
mo = malloc((sz1 + sz2) *sizeof(char) + 1);
if (mo == 0)
{
return (0);
}
for (i = 0; i <= sz1 + sz2; i++)
{
if (i < sz1)
{
mo[i] = s1[i];
}
else
{
mo[i] = s2[i - sz1];
}
}
mo[i] = '\0';
return (mo);
}
