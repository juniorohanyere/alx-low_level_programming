#include "main.h"

/**
 * flip_bits - function that return the number of bits
 *	       needed to flip to get from one number to another
 * @n: the decimal number
 * @m: the second decimal number
 *
 * Return: return the number of bits needed to flip
 *	   one number from the other
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;
	unsigned long int b;

	b = n ^ m;	/* xor and b*/

	do {
		a += (b & 1);
		b >>= 1;
	} while (b > 0);

	return (a);
}
