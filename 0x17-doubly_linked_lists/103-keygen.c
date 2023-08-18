#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a valid key for a username using a 'crackme5' program
 *
 * @argc: the argument counter
 * @argv: pointer to the arguments entered
 *
 * Return: return 0 on success
 *	   return 1 on failure
*/

int main(int argc, char *argv[])
{
	unsigned int i, j;
	size_t k, length;
	char *a = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char b[7] = "      ";

	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (-1);
	}

	length = strlen(argv[1]);
	b[0] = a[(length ^ 59) & 63];

	for (i = 0, k = 0; i < length; i++)
		k += argv[1][i];

	b[1] = a[(k ^ 79) & 63];
	for (i = 0, j = 1; i < length; i++)
		j *= argv[1][i];

	b[2] = a[(j ^ 85) & 63];
	for (j = argv[1][0], i = 0; i < length; i++)
		if ((char)j <= argv[1][i])
			j = argv[1][i];
	srand(j ^ 14);
	b[3] = a[rand() & 63];

	for (j = 0, i = 0; i < length; i++)
		j += argv[1][i] * argv[1][i];

	b[4] = a[(j ^ 239) & 63];
	for (j = 0, i = 0; (char)i < argv[1][0]; i++)
		j = rand();

	b[5] = a[(j ^ 229) & 63];

	printf("%s\n", b);

	return (0);
}
