#include "main.h"
/**
 * puts2 - The function prints the every other character of the string.
 *
 * @str: The string to be taken into the function.
 */

void puts2(char *str)
{
	int ln = 0, a = 0, b;
	char *str_v = str;
	
	while (*str_v != '\0')
	{
		str_v++;
		ln++;
	}
	a = ln - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b]);
	}
	_putchar('\n');
}

