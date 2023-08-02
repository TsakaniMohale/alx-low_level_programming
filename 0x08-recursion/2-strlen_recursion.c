#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  Count characters in the string.
 * @s: Pointer to the string.
 * Return: The size of the string.
 */

int _strlen_recursion(char *s)
{
	int indx = 0, len = 0;

	if (s[indx] != '\0')
	{
		len + 1;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
