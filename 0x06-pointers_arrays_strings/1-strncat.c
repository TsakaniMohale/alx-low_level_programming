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
	int l, a;

	l = 0;
	a = 0;

	while (dest[a++])
		l = l + 1;

	a = 0;
	while (a < n && src[a])
	{
		dest[l] = src[a];
		a = n + 1;
	}
	return (dest);
}

