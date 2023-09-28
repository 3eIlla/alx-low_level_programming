#include "main.h"

/**
 * move_past_star - N.proto
 *
 * @s2: 1st strin
 *
 * Return: nothin
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		{
			return (move_past_star(s2 + 1));
		}
	else
		{
			return (s2);
		}
}

/**
 * inception - brings magic 2 reality
 *
 * @s1: 1st strin
 * @s2: 2nd string + contain wildcard
 *
 * Return: f identical (1), (0) f false
 */
int inception(char *s1, char *s2)
{
	int rtr = 0;

	if (*s1 == 0)
		{
			return (0);
		}
	else if (*s1 == *s2)
		{
			rtr += wildcmp(s1 + 1, s2 + 1);
		rtr += inception(s1 + 1, s2);
		}
	return (rtr);
}

/**
 * wildcmp - compares 2 strin lexicographically
 *
 * @s1: 1st strin
 * @s2: 2nd string + contain wildcard
 *
 * Return: f identical (1), (0) f false
 */
int wildcmp(char *s1, char *s2)
{
	int rtr = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		{
			return (1);
		}
	if (*s1 == *s2)
	{
		if (!*s1)
			{
				return (1);
			}
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		{
			return (0);
		}
	else if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		else if (*s1 == *s2)
			{
				rtr += wildcmp(s1 + 1, s2 + 1);
			rtr += inception(s1, s2);
			}
		return (!!rtr);
	}
	return (0);
}
