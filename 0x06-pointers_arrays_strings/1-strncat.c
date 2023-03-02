#include "main.h"

/**
 * _strncat - a custom to concatinating two strings.
 * @dest: The pointer to the char.
 * @src: The pointer to the char.
 * @n: The size of the src memory address.
 * Return: dest, a concatinated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, a;

	c = 0;
	a = 0;

	while (dest[a])
		c++;

	a = 0;
	while (a < n && src[a] == '\0')
	{
		dest[c] = src[a];
		a++;
	}
	return (dest);
}

