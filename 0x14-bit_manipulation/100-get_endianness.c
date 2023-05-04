#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: return 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) &n;

	return (c[0]);
}
