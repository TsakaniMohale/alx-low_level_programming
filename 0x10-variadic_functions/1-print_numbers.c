#include "stdarg.h"
#include "variadic_functions.h"

/**
 * sum_them_all - Performs the sum
 * @n: number of values to be addes together
 * Return: Total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list Ptr;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(Ptr, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + va_arg(Ptr, int);

	va_end(Ptr);
	return (sum);
}
