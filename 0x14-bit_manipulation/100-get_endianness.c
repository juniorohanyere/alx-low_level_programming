#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: return 0 if big endian, 1 if little
*/

int get_endianness(void)
{
	unsigned int m = 1;
	char *n = (char *) &m;

	return (n[0]);
}
