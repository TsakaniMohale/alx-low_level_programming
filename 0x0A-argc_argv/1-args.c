#include "main.h"

/**
 * main - Execution start, and the program print NO. of arguments.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 * Return: 0 or 1, on success or failure respectively.
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	
	return (0);
} 
