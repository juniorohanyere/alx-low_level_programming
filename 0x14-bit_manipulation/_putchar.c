#include <unistd.h>

/**
 * _putchar - function to write a char
 *
 * @c: the char to be written
 *
 * Return: return the written char
*/

int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
