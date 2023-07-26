#include "main.h"
/**
 * rev_string - Reverse a given string in place.
 *
 * This function takes a string as inputiand reverse a given string in place.
 *
 * @s: The input string to be reserved
 */

void reverse_string(char *s)
{
	int a = 0;
	char rev_s = s[0];

	while (s[count] != '\0')
	{
		count++;
	}

	for (int a = 0; count; a++)

	{
		count--;
		rev_s = s[a];
		s[a] = s[count];
		s[count] = rev_s;
	}
}
