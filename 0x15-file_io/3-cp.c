#include "main.h"
#include <string.h>


/**
 * fdclose - close a file descriptor
 * @fd: opened file descriptor
 *
 * Return: nothing
 */

void fdclose(int fd)
{
	int fc = close(fd);

	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * checkerror - check for file operation error
 * @from: source file descriptor
 * @to: destination file descriptor
 * @argv: array of filenames
 * Return: void
 */
void checkerror(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - copies the content of a file to another file.
 *
 * Return: if the number of argument is not the correct one,
 * exit with code 97 and print Usage: cp file_from file_to,
 * followed by a new line, on the POSIX standard error
 *
 * if file_to already exists, truncate it
 *
 * if file_from does not exist, or if you can not read it,
 * exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the first argument passed to your program
 *
 * if you can not create or if write to file_to fails,
 * exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the second argument passed to your program
 *
 * if you can not close a file descriptor,
 * exit with code 100 and print Error: Can't close fd FD_VALUE,
 * followed by a new line, on the POSIX standard error
 * where FD_VALUE is the value of the file descriptor
 *
 * Permissions of the created file: rw-rw-r--.
 * If the file already exists, do not change the permissions
 * You must read 1,024 bytes at a time from the
 * file_from to make less system calls.
 * Use a buffer
 */

#define MAX 1024

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buf[MAX];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checkerror(from, to, argv);
    r = MAX;
	while (r > 0)
    {
		r = read(from, buf, MAX);
		if (r == -1)
			checkerror(-1, 0, argv);
		w = write(to, buf, r);
		if (w == -1)
			checkerror(0, -1, argv);
	};
	fdclose(from);
	fdclose(to);
	return (0);
}
