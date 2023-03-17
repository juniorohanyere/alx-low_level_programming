#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print value of n status; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* My code */

	if (n > 0)
		
		printf("%1 is positive\n", n);

	else if (n == 0)

		printf("%1 is zero\n", n);

	else

		printf("%1 is negative\n", n);

	return (0);

}
