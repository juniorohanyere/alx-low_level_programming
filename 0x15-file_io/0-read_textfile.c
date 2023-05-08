#include "main.h"

/**
 * read_textfile - function that reads a text file
 *		   and prints it to the POSIX standard output
 *
 * @filename: the4 text file to read from
 * @letters: the number of letters to read and print
 *
 * Return: return 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rfile, i;
	char *wfile;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	wfile = malloc(sizeof(char) * letters);
	if (wfile == NULL)
	{
		free(wfile);
		return (0);
	}
	rfile = read(file, wfile, letters);
	if (rfile == -1)
		return (0);
	i = write(STDOUT_FILENO, wfile, rfile);
	if (i == -1 || rfile != i)
		return (0);
	free(wfile);
	close(file);
	return (i);
}
