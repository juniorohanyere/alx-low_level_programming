#include <stddef.h>

#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: the decimal number of the bit to generate
 * @index: the index starting from 0 of the bit to set
 *
 * Return: return 1 on success, -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rep = 1;
	size_t size = sizeof(unsigned long int) * 8;

	if (index > size)
		return (-1);	/* failed */
	rep <<= index;
	*n = (*n | rep);
	return (1);	/* success */
}
