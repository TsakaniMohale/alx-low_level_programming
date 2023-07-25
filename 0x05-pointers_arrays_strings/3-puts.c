#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts - prints a string.
 *
 * This function prints a string.
 *
 * @str pointer to the char.
 */

void _puts(char *str)
{
	int i;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
