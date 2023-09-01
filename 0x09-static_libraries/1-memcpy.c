#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Memory destination
 * @src: Memory area copied
 * @n: Size
 * Return: Pointer to newly destination of the memory copied.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int indx;

	for (indx = 0; indx < n; indx++)
		dest[indx] = src[indx];
	return (dest);
}
