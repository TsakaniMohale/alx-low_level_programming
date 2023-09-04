#include "main.h"
#include <stdlib.h>

/**
 *argstostr - Function that concatenates all the arguments of the program.
 *@argc: Number of argments.
 *@argv: Array of arguments.
 *Return: Pointer to a new string.
 */

char *argstostr(int argc, char **argv)
{
	char *s;
	int i = 0, args, l = argc, byte;

	if (argc == 0 || argv == NULL)
		return (NULL);
	for (args = 0; args < argc; args++)
	{
		for (byte = 0; argv[args][byte]; byte++)
			l++;
	}
	s = malloc((sizeof(char) * (l + 1)));
	if (s == NULL)
		return (NULL);
	for (args = 0; args < argc; args++)
	{
		for (byte = 0; argv[args][byte]; byte++)
			s[i++] = argv[args][byte];
		s[i++] = '\n';
	}
	s[l] = '\0';
	return (s);
}
