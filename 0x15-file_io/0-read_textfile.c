#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this function that Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openfile, readfile, writefile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	openfile = open(filename, O_RDONLY);
	readfile = read(o, buffer, letters);
	writefile = write(STDOUT_FILENO, buffer, r);

	if (openfile == -1 || readfile == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openfile);

	return (writefile);
}
