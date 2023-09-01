#include "main.h"

/**
 *main - Execution start, and program print its name.
 *@argc: Number of arguments.
 *@argv: Array of arguments.
 *Return: 0 or 1, on success or failure respectively.
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
