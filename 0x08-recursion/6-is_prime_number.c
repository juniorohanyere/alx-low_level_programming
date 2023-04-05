#include "main.h"

/**
 * is_prime - function to calculate
 *		if a number is prime, recursively
 * @n: number to eveluate
 * @i: iterator
 *
 * Return: return 1 if n is prime, otherwise return 0
*/

int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - function to check if a number
 *			is prime or not
 *
 * @n: number to check if it's prime or not
 *
 * Return: return 1 if prime, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}
