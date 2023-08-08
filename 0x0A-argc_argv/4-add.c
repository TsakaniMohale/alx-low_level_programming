#include "main.h"

/**
 * main - Execution start, sum all the numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 or 1, on success or failure respectively.
 */

int main(int argc, char **argv)
{
	long int i, sum = 0;

	if (argc > 1)
	{
		for (i = 0; i != argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");

				return (1);
			}
			sum = sum + atoi(argv[i]);
		} printf("%ld\n", sum);
	} else
		printf("%ld\n", sum);

	return (0);
}
