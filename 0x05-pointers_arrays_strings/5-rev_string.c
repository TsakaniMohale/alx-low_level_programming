#include "main.h"
/**
 * reverse_string - Reverse a given string in place.
 *
 * This function takes a string as inputiand reverse a given string in place.
 *
 * @s: The input string to be reserved
 */

void reverse_string(char *s)
{
	int length = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int a = 0; a < length / 2; a++)

	{
		temp = s[a];
		s[a] = s[length - 1 - a];
		s[length - 1 - a] = temp;
	}
}
