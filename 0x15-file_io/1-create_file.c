#include "main.h"
#include <string.h>


/**
 * create_file - creates a file
 * @text_content: a NULL terminated string to write to the file
 * @filename: name of the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, m;

	if (!filename)
		return (-1);
	if (text_content)
		len = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	m = write(fd, text_content, len);
	if (fd == -1 || m == -1)
		return (-1);

	close(fd);
	return (1);
}
