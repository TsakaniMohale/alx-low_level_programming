#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: The first string taken into the function
 * @src: The second string taken into the function
 * @n: The size of the src memory address
 * Return: dest, a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	for ( ; l < n; l++)
		dest[l] = '\0';

	return (dest);
}
