#include "main.h"



/**
 * main - program
 *
 * @ac: arg's count
 * @av: arg's vector
 *
 * Return: (1) F success, (0) F failure
 */
int main(int ac, char **av)
{
	ssize_t btc;
	int from_feld = 0;
	int to_feld = 0;

	char buf[READ_BUF_SIZE];

	while (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_feld = open(av[1], O_RDONLY);

	if (from_feld == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_feld = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (to_feld == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((btc = read(from_feld, buf, READ_BUF_SIZE)) > 0)
		if (write(to_feld, buf, btc) != btc)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while (btc == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	from_feld = close(from_feld);
	to_feld = close(to_feld);

	if (from_feld)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_feld), exit(100);

	if (to_feld)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_feld), exit(100);

	return (EXIT_SUCCESS);
}

