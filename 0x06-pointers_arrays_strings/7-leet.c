#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string
 * Return: Encode
 */

char *leet(char *s)
{
	int i, j;
	char string_1[] = "AaEeOoTtLl";
	char code[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
		{
			if (s[i] == string_1[j])
				s[i] = code[j];
		}
	return (s);
}
