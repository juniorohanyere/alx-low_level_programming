#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 *	       at a given index
 * @n: the decimal number
 * @index: the index, starting from 0 of the bit to be set
 *
 * Return: return 1 on success, -1 on failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	m = ~(m << index);
	*n = (*n & m);

	return (1);
}
