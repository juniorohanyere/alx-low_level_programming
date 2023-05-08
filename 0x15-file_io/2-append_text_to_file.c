#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: the name of file to append the text to
 * @text_content: the text to append to the file
 *
 * Return: return 1 on success
 *	   return -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, wtext = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);

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
