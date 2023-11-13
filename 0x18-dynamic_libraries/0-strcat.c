#include "main.h"

/**
 * _strcat - a function to concatinate two strings
 * @dest: pointer to the char
 * @src: pointer to the char
 * Return: dest, a concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int l = 0;

	while (dest[l] != '\0')
		l++;
	while (src[a] != '\0')
	{
		dest[l] = src[a];
		l++;
		a++;
	}

	return (dest);
}

