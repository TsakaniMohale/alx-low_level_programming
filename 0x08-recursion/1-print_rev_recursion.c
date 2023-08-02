#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: input string to the function
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s++);
		_putchar(s[i]);
	}
}
