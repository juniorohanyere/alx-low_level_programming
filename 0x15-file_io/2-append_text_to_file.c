#include <unistd.h>
#include <fcntl.h>

#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: the name of the file to append text at the end
 * @text_content: null terminated string to add to the end of the file
 *
 * Return: return 1 on success
 *	   return -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wfile, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

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
