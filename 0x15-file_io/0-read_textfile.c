#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 *		   to the POSIX standard output
 *
 * @filename: the name of the file to read the text from
 * @letters: the number of letters it should read and print
 *
 * Return: return the actual number of letters it could read and print
 * otherwise return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rfile, wfile;
	char *buffer;

	/* assign enough memory for the buffer pointer */
	buffer = malloc(sizeof(char) * letters);

	/* check for memery error */
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	if (filename == NULL)
		return (0);

	/* open file in read only mode */
	file = open(filename, O_RDONLY);

	/* check for error */
	if (file == -1)
		return (0);

	/* read the opened file */
	rfile = read(file, buffer, letters);

	if (rfile == -1)	/* return 0 on failure */
		return (0);

	/* write the buffer read from the file to POSIX standard output */
	wfile = write(STDOUT_FILENO, buffer, rfile);
	if (wfile == -1 || rfile != wfile)
		return (0);

	free(buffer);

	close(file);

	return (wfile);
}
