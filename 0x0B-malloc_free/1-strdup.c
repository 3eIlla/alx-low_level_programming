#include "main.h"
/**
  *_strdup - point to a newly allocated space n memo
  * which contains a cp of string as paramet
  * @str: strin
  * Return: 0
 */

char *_strdup (char *str)
{
int i = 0;
int sz = 0;
char *mo;

if (str == NULL)
{
return (NULL);
}
while (!(str[sz] = '\0'))
{
	mo = malloc(sz * sizeof(*str) + 1);
	if (mo == 0)
{
return (NULL);
}
else
{
for (; i < sz; i++)
mo[i] = str[i];
}
}
sz++;
return (mo);
}