#include <stdarg.h>

/**
 * sum_them_all - function to add all parameters
 *
 * @n: start of input variables
 *
 * Return: return the sum of the parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	va_start(ap, n);

	for (param = 0; param < n; param++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
