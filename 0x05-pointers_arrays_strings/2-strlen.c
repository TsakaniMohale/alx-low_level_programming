::nclude "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * Desription: function that returns the length of a string.
 *
 * @s: the pointer to the char
 *
 * Return: void
 *
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
