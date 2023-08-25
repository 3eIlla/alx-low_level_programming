#include "main.h"

/**
 * string_toupper return the length of the string
 *
 * @str : string to return
 * @l : pointer to destnation input
 *
 * Return : noth
 */

char *string_toupper(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (str[l] <= 122 && str[l] >= 97)
		{
			str[l] = str[l] - 32;
		}
	}
	return (str);
}
