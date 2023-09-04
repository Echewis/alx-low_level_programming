#include "main.h"

/**
 * create_file - will creat the file
 * @filename: is a pointer representing any name
 * @text_content:This is a pointer to the files content
 * Return: will return 1 for positive or -1 for negative
 */

int create_file(const char *filename, char *text_content)
{
	int filed, len = 0;
	ssize_t bytes_written;

	if (filename == 0)
		return (0);

	filed = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filed == -1)
		return (-1);

	if (text_content != NULL)
	{

		while (text_content[len] != '\0')
			len++;
		bytes_written = write(filed, text_content, len);

		if (bytes_written == -1)
			return (-1);
	}
	close(filed);
	return (1);
}
