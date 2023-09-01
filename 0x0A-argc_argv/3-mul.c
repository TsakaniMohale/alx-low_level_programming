#include "main.h"

/**
 * main - Execution start, multiply two numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 or 1, on success or failure respectively.
 */

int main(int argc, char **argv)
{
	int prod = 0;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	} else
	{
		puts("Error");
	}
	return (0);
}
