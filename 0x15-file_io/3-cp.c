#include "main.h"

/**
 * print_error - function that prints an error message
 *		 and exits with an exit number
 *
 * @fd: file descriptor
 * @num: the exit number or @fd
 * @str: the name of the file_in or file_out
 *
 * Return: return 0 on success
*/

int print_error(int fd, int num, char *str)
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
 * copy_file - function that copies the content of a file to another file
 *
 * @num: variable to retrieve the number of command line arguments entered
 * @str: variable to retrieve the command line arguments entered
 *
 * Return: return nothing
*/

void copy_file(int num, char *str[])
{
	int input_file, output_file, rfile, wfile, rclose, wclose;
	char buffer[1024];

	if (num != 3)
		print_error(0, 97, NULL);

	input_file = open(str[1], O_RDONLY);
	if (input_file == -1)
		print_error(0, 98, str[1]);

	output_file = open(str[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (output_file == -1)
		print_error(0, 99, str[2]);

	while ((rfile = read(input_file, buffer, 1024)) != 0)
	{
		if (rfile == -1)
			print_error(0, 98, str[1]);

		wfile = write(output_file, buffer, rfile);
		if (wfile == -1)
			print_error(0, 99, str[2]);
	}
	rclose = close(input_file);
	if (rclose == -1)
		print_error(input_file, 100, NULL);

	wclose = close(output_file);
	if (wclose == -1)
		print_error(output_file, 100, NULL);

}

/**
 * main - Entry point
 *
 * @argc: the number of command line arguments entered
 * @argv: the command line arguments entered
 *
 * Return: return 0 on success
*/

int main(int argc, char *argv[])
{
	copy_file(argc, argv);

	return (0);
}
