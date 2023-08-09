#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 *_strdup - Returns a pointer to a newly allocated space in memory.
 *@str: String.
 *Return: Pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned long int i;

	if (str == NULL)
		return (NULL);
	s = malloc((strlen(str) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	return (s);
}
