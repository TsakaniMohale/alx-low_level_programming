#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Chessboard pointer.
 */

void print_chessboard(char (*a)[8])
{
	int i;

	while (*a)
	{
		for (i = 0; i < 8; i++)
			_putchar(*a[i]);
		_putchar('\n');
		a++;
	}
}
