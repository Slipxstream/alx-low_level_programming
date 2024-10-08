#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a txt file and prints to POSIX standard output.
 * @filename: Pointer to file name
 * @letters: The number of letters the function should read and print.
 *
 * Return: If write fails, does not write expected number of bytes or 
 *         filename is NULL, 0.
 *         O/w - actual number of bytes the function can read & print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
