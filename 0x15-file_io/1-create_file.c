#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: the name of the file to create
 * @text_content: the NULL terminated string to write to the file
 *
 * Return: return 1 on success
 *	   return -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file, i, wtext = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[wtext] != '\0')
			wtext++;
		i = write(file, text_content, wtext);

		if (i == -1)
			return (-1);
	}
	close(file);
	return (1);
}
