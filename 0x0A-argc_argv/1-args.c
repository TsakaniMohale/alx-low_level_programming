#include "main.h"

/**
 * main - Execution start, and the program print NO. of arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 or 1, on success or failure respectively.
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
