#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *	  for an amount of money
 * @argc: the number of arguments passed
 * @argv: array pointer holding the arguments passed
 *
 * Return: Always return 0
*/

int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			num_coins += 1;
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
