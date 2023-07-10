#include <unistd.h>

/**
 * _putchar - function that writes a char to stdout
 *
 * @c: the character to print
 *
 * Return: return 1 on success
 *	   return -1 on failure
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
