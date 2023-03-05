#include "main.h"

/**
 * print _sauare - prints a square
 * @size: the size of the square
 *
 * Return: void 
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putcher('\n';)
	}

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size; j++)
		{
			putcher('#');
		}
		_putcher('\n');
		i++;
	}
}


					
