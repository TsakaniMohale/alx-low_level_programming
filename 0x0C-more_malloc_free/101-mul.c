#include <stdio.h>
#include <stdlib.h>

/**
 *main - Execution start, multiply two numbers.
 *@argc: Number of arguments
 *@argv: Array of arguments
 *Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i, j;
	
	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	for (i = 2; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				fprintf(stderr, "Error\n");
				exit(98);
			}
		}
	}

	printf("%lu\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
