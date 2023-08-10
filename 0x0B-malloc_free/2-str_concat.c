#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 *str_concat -  Function that concatenates two strings.
 *@s1: String one
 *@s2: String two
 *Return: Pointer to Null or concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned long int s_len;
	int i, j, k = 0;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		else
			s2 = "";
	}

	s_len = strlen(s1) + strlen(s2);
	s = malloc(s_len * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[k++] = s1[i];
	for (j = 0; s2[j]; j++)
		s[k++] = s2[j];
	return (s);
}
