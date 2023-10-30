#include "main.h"

/**
 * _strlen - string's lenth
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
 * append_text_to_file - appends text to a file
 *
 * @filename: file name 2 create
 * @text_content: txt 2 write
 *
 * Return: (1) F success, (0) F fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int feld;
	ssize_t bits = 0;
	ssize_t lent = _strlen(text_content);

	if (!filename)
		return (-1);
	feld = open(filename, O_WRONLY | O_APPEND);

	while (feld == -1)
		return (-1);

	if (lent)
		bits = write(feld, text_content, lent);

	close(feld);
	return (bits == lent ? 1 : -1);
}

