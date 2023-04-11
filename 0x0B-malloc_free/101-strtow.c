#include <stdlib.h>

/**
 * word_count - get word count from string without spaces
 *
 * @str: string to count the number of words present
 *
 * Return: return the number of words
*/

int word_count(char *str)
{
	int words = 0;

	while (*str != '\0')
	{
		/* skip spaces if any*/
		if (*str == ' ')
			str++;
		else
		{
			/* count the number of words */
			while (*str != ' ' && *str != '\0')
				str++;
			words++;
		}
	}
	return (words);
}

/**
 * free_array - function to free an array
 *
 * @ar: the array to be free'd
 * @i: the array[i]
 *
 * Return: return nothing
*/

void free_array(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
}

/**
 * strtow - a function that splits a string into words
 *
 * @str: the input string to split
 *
 * Return: return a null value or a string
*/

char **strtow(char *str)
{
	int i, s, j, length, word;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);
	length = word_count(str);

	/* return null if length == 0 or string == NULL */
	string = malloc((length + 1) * sizeof(char *));
	if (length == 0 || string == NULL)
		return (NULL);
	for (i = s = 0; i < length; i++)
	{
		for (word = s; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				s++;
			if (str[word] != ' ' && (str[word + 1] == ' ' || str[ord + 1] == '\0'))
			{
				string[i] = malloc((word - s + 2) * sizeof(char));
				if (string[i] == NULL)
				{
					free_array(string, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; s <= word; s++, j++)
			string[i][j] = str[s];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);
}
