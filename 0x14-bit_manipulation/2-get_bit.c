#include "main.h"

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

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
