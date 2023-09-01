#include "main.h"

/**
 * _strstr - finds the first occurance of the substring.
 * needle in the string haystack.
 * @haystac; entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located of substring or
 * NULL if the subtring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	
	if (*haystack == 0)
		
		return (haystack);
	
	while (*haystack)
	
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			for ( ; haystack[i] == needle[i]; i++)
				if (needle[i + 1] == '\0')
					return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
