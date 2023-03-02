#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer
 * @s2: pointer
 * Return: The difference
 */

int _strcmp(char *s1, char *s2)
{
	int def, i = 0;

	while ((s1[i] &&  s2[i]) && s1[i] == s2[i])
		i++;

	def = s1[i] - s2[i];

	return (def);
}
