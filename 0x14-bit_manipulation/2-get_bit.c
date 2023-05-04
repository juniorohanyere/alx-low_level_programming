#include "main.h"
#include "stddef.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: the decimal value of the bit to generate
 * @index: the index starting from 0 of the bit to get
 *
 * Return: return the value of the bit at index index
 *	   return -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	size_t size = sizeof(unsigned long int) * 8;

	if (index > size)
		return (-1);
	b = ((n >> index) & 1);
	return (b);
}
