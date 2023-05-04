#include <stddef.h>

#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 *
 * @n: the decimal number of the bit to generate
 * @index: the index starting from 0 of the bit to set
 *
 * Return: return 1 on success, -1 on failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rep = 1;
	size_t size = sizeof(unsigned long int) * 8;

	if (index > size)
		return (-1);	/* failed */
	rep = ~(rep << index);
	*n = (*n & rep);
	return (1);
}
