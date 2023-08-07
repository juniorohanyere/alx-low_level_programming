#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "main.h"

/**
 * _err - prints an error message and exits with an exit number
 *
 * @fd: file descriptor
 * @num: the exit number or @fd
 * @str: the name of the file_in or file_out
 *
 * Return: return 0 on success
*/

int _err(int fd, int num, char *str)
{
	if (num == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(num);
	}
	else if (num == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(num);
	}
	else if (num == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(num);
	}
	else if (num == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(num);
	}
	else
		return (0);
}

/**
 * _cp - copies the content of a file to another file
 *
 * @num: variable to retrieve the number of command line arguments entered
 * @str: variable to retrieve the command line arguments entered
 *
 * Return: return nothing
*/

void _cp(int num, char *str[])
{
	int ifile, ofile, rfile, wfile, rclose, wclose;
	char buffer[1024];

	if (num != 3)
		_err(0, 97, NULL);

	ifile = open(str[1], O_RDONLY);
	if (ifile == -1)
		_err(0, 98, str[1]);

	ofile = open(str[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (ofile == -1)
		_err(0, 99, str[2]);

	while ((rfile = read(ifile, buffer, 1024)) != 0)
	{
		if (rfile == -1)
			_err(0, 98, str[1]);

		wfile = write(ofile, buffer, rfile);
		if (wfile == -1)
			_err(0, 99, str[2]);
	}
	rclose = close(ifile);
	if (rclose == -1)
		_err(ifile, 100, NULL);

	wclose = close(ofile);
	if (wclose == -1)
		_err(ofile, 100, NULL);

}

/**
 * main - Entry point
 *
 * @argc: number of command line arguments entered
 * @argv: command line arguments entered
 *
 * Return: return 0 on success
*/

int main(int argc, char *argv[])
{
	_cp(argc, argv);

	return (0);
}
