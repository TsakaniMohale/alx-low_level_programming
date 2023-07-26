#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * This function takes a string as input and prints it in reverse order.
 *
 * @s: The input string to be printed in reverse.
 */

void print_rev(char *s)
{
	int a, ln = 0;
	while (*s != '\0')
	{
			ln++;
			s++;
	}
	s--;
	for (a = ln; i > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
