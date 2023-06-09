#include <unistd.h>
#include <fcntl.h>

#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: the name of the file to create
 * @text_content: a null terminated string to write ti the file
 *
 * Return: return 1 on success
 *	   return -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file, wfile, i;

	if (filename == NULL)
		return (-1);	/* failure */

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);	/* failure */

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		wfile = write(file, text_content, i);
		if (wfile == -1)
			return (-1);
	}
	close(file);

	return (1);
}
