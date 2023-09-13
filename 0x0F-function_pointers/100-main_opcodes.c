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
	int bytes, i;
	char *arr;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	bytes = atoi(argv[1]);


	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}



