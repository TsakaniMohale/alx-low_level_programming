#include "main.h"

/**
 * factorial - Number factorial.
 * @n: Number
 * Return: Worked factorial on the number.
 */

int factorial(int n)
{
	int _f = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	_f *= factorial(n - 1);
	return (_f);
}
