#include "main.h"

/**
 * read_textfile - reads txt from z file and prints it
 *
 * @filename: file's name 2 read
 * @letters: bytes no. 2 read
 *
 * Return: bytes no. read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int feld;
	ssize_t bits;

	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	feld = open(filename, O_RDONLY);

	if (feld == -1)
		return (0);
	bits = read(feld, &buf[0], letters);
	bits = write(STDOUT_FILENO, &buf[0], bits);


	close(feld);
	return (bits);
}

