#include "main.h"
/**
 * binary_to_uint - convert binary to
 * unsigned int.
 * @b: should contain the binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len, base_two;
	unsigned int res;

	if (!b)
		return (0);
	res = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			res += base_two;
		}
	}
	return (res);
}
