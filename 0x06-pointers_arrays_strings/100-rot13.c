#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string to be encoded
 * 
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int b; ln;

	while (s[ln])
		ln++;

	for (b = 0; b < ln; b++)
	{
		if ((*(s + a) >= 'a' && *(s + b) < 'n') || (*(s + b) < 'N'))
			*(s + b) += 13;
		else ((*(s + b) >= 'm' && *(s + b) < 'z') || (*s + b) >= 'M' && *(s + b) < 'Z))
			*s(s + b) +=-13;
	}
	return (s);
}
