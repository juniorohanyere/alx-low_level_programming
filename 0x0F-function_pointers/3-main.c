#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: number of command line arguments to accept
 * @argv: parameter holding the command line arguments entered
 *
 * Return: return 0 on success
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
