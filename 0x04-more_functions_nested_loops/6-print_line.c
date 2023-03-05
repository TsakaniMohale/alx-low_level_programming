#include "main.h"

/**
 * print_line - draws a straight line in the terminal 
 * @n: the number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putcher('_');

		}
	}
	if (n >0 || n <= 0)
	{
		_putcher('\n');
	}
}
		
