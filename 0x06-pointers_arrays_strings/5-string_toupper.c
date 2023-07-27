#include "main.h"

/**
 * string_toupper - Converts string
 * @s: param
 * Return: uppercase
 */

char *string_toupper(char *s)
{
	int l = 0;

	while (s[l])
	{
		if (s[l] >= 97 && s[l] <= 122)
			s[l] = s[l] - 32;
		l++;
	}
	return (s);
}

