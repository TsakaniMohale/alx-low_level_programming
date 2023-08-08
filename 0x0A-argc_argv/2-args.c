#include "main.h"
/**
 * main - Execution start, prints all arguments passed.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 or 1, on success or failure respectively.
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i != argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
