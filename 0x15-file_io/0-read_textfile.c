#include "main.h"

#define MAX 1000
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: the number of letters it should read and print
 * @filename: name of the file
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, m;
	char *s;

	if (!filename)
		return (0);
	s = malloc(sizeof(char *) * letters);

	if (!s)
		return (0);
	fd = open(filename, O_RDONLY);
	n = read(fd, s, letters);
	m = write(STDOUT_FILENO, s, n);
	if (fd == -1 || n == -1 || m == -1 || n != m)
	{
		free(s);
		return (0);
	}

	free(s);
	close(fd);
	return (m);
}
