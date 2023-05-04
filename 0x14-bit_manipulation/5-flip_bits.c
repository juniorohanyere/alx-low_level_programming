#include "main.h"

/**
 * flip_bits - function that returns the number of needed to flip
 *	       to get from one number to another
 *
 * @n: the first decimal value of the bit to generate
 * @m: the second decimal value of the bit to generate
 *
 * Return: return the number of bits needed to flip to get @n from @m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int b;

	a = n ^ m;
	b = 0;
	while (a > 0)
	{
		b += (a & 1);
		a >>= 1;
	}

	return (b);
}
