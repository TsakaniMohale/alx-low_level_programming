#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Memory pointer
 * @b: Character
 * @n: Size
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int indx = 0;

	while (indx < n)
	{
		s[indx] = b;
		indx++;
	}
	return (s);
}
