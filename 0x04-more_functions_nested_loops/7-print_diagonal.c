#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			_putchar('\\');
		}
		else
		{
			if (i < n)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	if (n <= 0)
	{
		_putchar('\n');
	}
}
