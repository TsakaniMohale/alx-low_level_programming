#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string is function
 * Return: string with capital letters
 */
char *cap_string(char *s)
{
	char c[] = {32, 9, '\n', ',', '.', ';', '!', '?', '"', '(', ')', '{', '}'};
	int i, l = 13, n = 0;

	while (s[n])
	{
		i = 0;
		while (i < l)
		{
			if ((n == 0 || s[n - 1] == c[i]) && (s[n] >= 97 && s[n] <= 122))
				s[n] = s[n] - 32;
			i++;
		}
		n++;
	}
	return (s);
}
