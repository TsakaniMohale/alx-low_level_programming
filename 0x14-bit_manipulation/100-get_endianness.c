#include "main.h"

/**
 * get_endianness - determines the endianness
 * Return: Boolen value, (0 or 1)
 */

int get_endianness(void)
{
	int num = 1;
	char *Ptr = (char *) &num;

	return (*Ptr == 1);
}
