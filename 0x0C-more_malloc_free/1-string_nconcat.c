#include "main.h"
#include <stdio.h>

/**
* string_nconcat - concatenates 2 strin
* @s1: point 2 1st strin.
* @s2: point 2 2nd string.
* @n: Number of bytes from n2 to concatenate.
* Return:Pointer to space in memory containing concatenated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strl;
unsigned int il, jl, s1len, s2len;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}

for (s1len = 0; s1[s1len] != '\0'; s1len++)
;
for (s2len = 0; s2[s2len] != '\0'; s2len++)
;

strl = malloc(s1len + n + 1);
if (strl == NULL)
{
	return (NULL);
}

for (il = 0; s1[il] != '\0'; il++)
{
	strl[il] = s1[il];
}

for (jl = 0; jl < n; jl++)
{
strl[il] = s2[jl];
il = il + 1;
}
strl[il] = '\0';
return (strl);
}
