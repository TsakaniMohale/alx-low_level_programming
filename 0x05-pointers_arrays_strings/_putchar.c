#include <unistd.h>

/**
 *
 *
 * Return: int ascii value of a char.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
