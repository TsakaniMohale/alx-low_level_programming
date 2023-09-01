#include "main.h"
#include <stdio.h>

/**
 * _strchr - find the character
 * @s: string to get characters on
 * @c: The char to be located in a string
 * Return: pointer to return if successful
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
