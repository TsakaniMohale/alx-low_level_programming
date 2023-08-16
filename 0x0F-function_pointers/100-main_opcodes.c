#include <stdlib.h>
#include <stdio.h>

/**
 * main - exectution starts, function prints opcodes
 *
 * print_opcodes - program that prints the opcodes of its own main function
 *
 * @argc: Total number of commands agrguments
 *
 * @argv: Values of commands argument
 *
 * Return: 0 on success or 1 , 2 on a failure
 */

int main(int argc, char *argv[])
{
	int a, n_bytes;
	int (*opcodes)(int, char **);


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_bytes = atoi(argv[1]);

	if (num_bytes <= 0)

	{
		printf("Error\n");
		return (2);
	}

	opcodes = main;

	for (a = 0; a < n_bytes; i++)

	{
		printf("%02x", *(unsigned char *)opcodes);

		if (a == nbytes - 1)
			continue;
		printf(" ");
		opcodes++;
	}

	printf("\n");
	return (0);
}
