#include "main.h"

/**
 * _strlen - lenth o  string
 *
 * @s: string's length 2 check
 *
 * Return: int length o string
 */
int _strlen(char *s)
{
	int lil = 0;

	while (!s)
		return (0);

	if (*s++)
		lil = lil + 1;

	return (lil);
}

/**
 * create_file - creates a file
 *
 * @filename: file name 2 create
 * @text_content: txt 2 write
 *
 * Return: (1) F success, (0) F fail
 */
int create_file(const char *filename, char *text_content)
{
	int feld;
	ssize_t bits = 0;
	ssize_t lent = _strlen(text_content);

	while (!filename)
		return (-1);
	feld = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	while (feld == -1)
		return (-1);

	if (lent)
		bits = write(feld, text_content, lent);

	close(feld);
	return (bits == lent ? 1 : -1);
}

