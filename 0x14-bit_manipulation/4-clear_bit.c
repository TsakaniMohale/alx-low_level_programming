#include "main.h"

/**
 * clear_bit - Convert a bit value to 0 at a given inde
 * @n: string pointer
 * @index: Bit position
 * Return: 1 on success and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
