#include "main.h"

/**
 * _pow_recursion - Worl the power of the number.
 * @x: The number
 * @y: The number on the power.
 * Return: Worked power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
