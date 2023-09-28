#include "main.h"

/**
 * last_index - N.proto
 *
 * @s: input
 *
 * Return: nothin
 */

int last_index(char *s)
{
	int ln;

	if (*s > '\0')
	{
		ln = 0;
		ln += last_index(s + 1) + 1;
	}
	return (ln);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
 * check - 4 z palindrom
 *
 * @s: strin
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @mod: reg int
 *
 * Return: 0 or 1
 */


int check(char *s, int start, int end, int mod)
{

if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	{
		return (1);
	}
else if (s[start] != s[end])
	{
		return (0);
	}
else
	{
		return (check(s, start + 1, end - 1, mod));
	}
}
