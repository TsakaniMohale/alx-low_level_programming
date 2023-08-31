#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int  ln = 0, i;
	
	while (*(src + ln) != '\0')
	{
		ln++;
	}
	for (i = 0; i < ln; i++)
	{
		dest[i] = src[i];
	}
	dest[ln] = '\0';
	
	return (dest);
}
