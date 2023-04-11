#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first string to input
 * @s2: second string to input
 *
 * Return: return null or a string
*/

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find length of first string and second string */
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));
	if (s == NULL)
		return (NULL);

	/* add the first string to array s */
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	/* add the second string to array s */
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
