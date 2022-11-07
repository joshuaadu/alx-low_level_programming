#include "main.h"
#include <string.h>


/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: a NULL terminated string to write to the file
 * @filename: name of the file
 *
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, m;

	if (!filename)
		return (-1);
	if (text_content)
		len = strlen(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (!fd)
		return (-1);

	m = write(fd, text_content, len);
	if (m == -1)
		return (-1);

	close(fd);
	return (1);
}
