#include "main.h"

/**
 *  append_text_to_file - will append a file
 *  @filename: is the address of the file name
 *  @text_content: is the address of the file conent
 *  Return: will return either 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed, len = 0;
	ssize_t bytes_written;

	if (filename == 0)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

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
