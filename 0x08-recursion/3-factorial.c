#include "main.h"

/**
 * factorial - function to return
 *		the factorial of a given number
 *
 * @n: Integer to factorialize
 *
 * Return: Return -1 if n < 0, otherwise return 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n-1);
}
