#include "main.h"

/**
 * _strncat - a custom to concatinating two strings
 * @dest: The pointer to the char
 * @src: The pointer to the char
 * @n: The size of the src memory address
 * Return: dest, a concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, n;

	l = 0;
	n = 0;

	while (dest[n++])
		l = l + 1;

	n = 0;
	while (n < n && src[n])
	{
		dest[l] = src[n];
		n = n + 1;
	}
	return (dest);
}

