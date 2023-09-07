#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 *string_nconcat -  Function that concatenates two strings.
 *@s1: String one.
 *@s2: String two.
 *@n: Number of memory blocks.
 *Return: Pointer to combined string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);
	s = malloc(strlen(s1) + n + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (strlen(s1) + n); i++)
		if (i < strlen(s1))
			s[i] = s1[i];
		else
			s[i] = s2[i];
	s[i] = '\0';
	return (s);
}
