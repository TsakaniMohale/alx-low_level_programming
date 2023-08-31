#include "main.h"

/**
 * _atoi - converts a string to an integer. 
 * @s: input string. 
 * Return: integer.
 */
int _atoi(char *s)
{
	int sn = 1;
	unsigned int n = 0;
	
	do {
		if (*s == '-')
			sn = sn * (-1);
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * sn);
}
