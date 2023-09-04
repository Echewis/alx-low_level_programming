#include "main.h"

/**
 * read_textfile - will read a file
 * @filename: is the pointer the file name
 * @letters: is the pointer to the letter
 * Return: will return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *pointf;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (*filename == 0)
		return (0);

	pointf = fopen(filename, "r");

	if (pointf == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);


	bytes_read = fread(buffer, sizeof(char), letters, pointf);

	if (bytes_read == -1)
		return (0);



	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);

	if (bytes_written != bytes_read)
		return (0);
	fclose(pointf);
	free(buffer);

	return (bytes_written);
}
