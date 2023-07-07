#include "main.h"

#define CHAR_BITS 8
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * get_bit - function that returns the value of a bit
 *	     at a given index
 * @n: the decimal value
 * @index: the index, starting from 0 of the bit we want to get
 *
 * Return: return the value of the bit at index @index on success
 *	   return -1 on failure
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > INT_BITS)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
