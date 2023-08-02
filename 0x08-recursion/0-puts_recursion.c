#include "main.h"

/**
 * _puts_recursion - Printing characters in a string using recursion.
 *
 * @s: Pointer to the string.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
