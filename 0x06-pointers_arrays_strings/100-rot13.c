#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string to be encoded
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int a = 0, len = 0;

	while (s[len])
		len++;

	while (a < len)
	{
		if ((s[a] >= 'a' && s[a] < 'n') || (s[a] >= 'A' && s[a] < 'N'))
			s[a] += 13;
		else if ((s[a] >= 'm' && s[a] < 'z') || (s[a] >= 'M' && s[a] < 'Z'))
			s[a] += -13;
		a++;
	}
	return (s);
}
