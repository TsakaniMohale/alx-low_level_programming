#include "main.h"

/**
 * print_line - print straight line
 * @n: number of times
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	if (n > 0 || n <= 0)
	{
		_putchar('\n');
	}
}
