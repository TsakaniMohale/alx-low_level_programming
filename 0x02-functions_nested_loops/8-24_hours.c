#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i; /* store the min digit */

	int j; /* store the sec digit */


	for (i = 0; i <= 23; i++)
	{

		for (j = 0; j <= 59; j++)

		{

			_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');

			_putchar(':');

			_putchar(j / 10 + '0');

			_putchar(j % 10 + '0');

			_putchar('\n');

		}

	}
}
