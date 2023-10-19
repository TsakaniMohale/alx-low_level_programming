#include "main.h"

/**
 * get_bit - Get a value of a bit
 * @n: Integer to to extract a bit
 * @index: Position of a bit
 * Return: A bit 1 or 0 and or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
