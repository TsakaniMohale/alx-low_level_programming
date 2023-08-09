#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *strtow -Function splits a string into words.
 *@str: A pointer to a string.
 *Return: NULL ointer or double pointer to a string.
 */

char **strtow(char *str)
{
	char **s;
	int i = 0, j, k = 0, l, words = 0;

	while (str[i])
	{
		if (str == NULL || str[0] == '\0')
			return (NULL);
		if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1])))
			words++;
		i++;
	}
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1])))
		{
			j = i;
			while (isalpha(str[j]))
				j++;
			s[k] = malloc((j - i + 1) * sizeof(char));
			if (s[k] == NULL)
			{
				l = k;
				for ( ; l >= 0; l--)
					free(s[k]);
				free(s);
				return (NULL);
			}
			strncpy(s[k], &str[i], j - i + 1);
			s[k][j - 1] = '\0';
			k++;
		}
	}
	s[k] = NULL;
	return (s);
}
