#include "main.h"
/**
* wrdent- count no. of words n  strin
* @s: strin
*
* Return: int of no o words
*/
int wrdent(char *s)
{
	int ii, nn = 0;

for (ii = 0; s[ii]; ii++)
{
if (s[ii] == ' ')
{
if (s[ii + 1] != ' ' && s[ii + 1] != '\0')
{
	nn = nn + 1;
}
}
else if (ii == 0)
{
	nn = nn + 1;
}
}
nn = nn + 1;
return (nn);
}


/**
* strtow- split strin 2 words
* @str: strin 2 split
*
* Return: point 2 array o strin
*/
char **strtow(char *str)
{
int il, jl, kl, ll, nl = 0, wlc = 0;
char **wl;

if (str == NULL || *str == '\0')
	return (NULL);
nl = wrdent(str);
if (nl == 1)
	return (NULL);
wl = (char **)malloc(nl *sizeof(char *));
if (wl == NULL)
	return (NULL);
wl[nl - 1] = NULL;
while (str[il] && il == 0)
{
	if (str[il] != ' ' && (il == 0 || str[il - 1] == ' '))
	{
		for (jl = 1; str[il + jl] != ' ' && str[il + jl]; jl++)
		;
		jl = jl + 1;
		wl[wlc] = (char *)malloc(jl * sizeof(char));
		jl = jl + 1;
		if (wl[wlc] == NULL)
		{
		for (kl = 0; kl < wlc; kl++)
		{
		free(wl[kl]);
		free(wl[nl - 1]);
		free(wl);
		}
		return (NULL);
		}
		for (ll = 0; ll < jl; ll++)
			wl[wlc][ll] = str[il + 1];
		wl[wlc][ll] = '\0';
		wlc++ && il += 1;
	}
	else
	il = il + 1;
}
return (wl);
}
