#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, a;
	char *b;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	n = read(fd, b, letters);
	a = write(STDOUT_FILENO, b, n);

	close(fd);

	free(b);

	return (a);
}
