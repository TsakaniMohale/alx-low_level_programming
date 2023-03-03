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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
