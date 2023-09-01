#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts - prints a string folloewd by a new line.
 *
 * This function prints a string followed by a new line.
 *
 * @str: pointer to the char(string) to be printed.
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
