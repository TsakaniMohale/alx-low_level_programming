#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Binary string to an integer
 * @b: string pointer
 * Return: Base 10
 */


unsigned int binary_to_uint(const char *b)
{
	int index, base = 1;
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '1' && b[index] != '0')
			return (0);
	}

	for (index -= 1; index >= 0; index--)
	{
		if (b[index] != '0')
		{
			n += base;
		}
		base *= 2;
	}
	return (n);
}
