#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 *
 * @c: the character to write to standard output
 *
 * Return: return the character written
*/

int _putchar(char c)
{
	write(1, &c, 1);

	return (c);
}
