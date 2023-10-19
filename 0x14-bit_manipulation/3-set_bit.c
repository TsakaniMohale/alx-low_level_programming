#include "main.h"

/**
 * set_bit - Convert bit value to 1 1 at a given index
 * @n: string pointer
 * @index: Position of the bit
 * Return: 1 on success, and -1 on errror
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | 1 << index;

	return (1);
}
