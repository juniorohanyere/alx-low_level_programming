#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 *	     to 1 at a given index
 *
 * @n: the decimal number
 * @index: the index, starting from 0 of the bit to be set
 *
 * Return: return 1 on success, -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	m <<= index;
	*n = (*n | m);

	return (-1);
}
