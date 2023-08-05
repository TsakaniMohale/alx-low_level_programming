#include "main.h"

/**
 * main - The program starts here.
 * @argc: commands counts.
 * @argv: commands values.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	long int a = 1, addi_res = 0;

	if (argc > 1)
	{
		for (; a != argc; a++)
		{
			if (*argv[i] < '0' || *argv[a] > '9')
			{
				printf("Error\n");
				return (1);
			}
			addi_res = addi_res + atoi(argv[a]);
		}
		printf("%ld\n", addi_res);
	} else
		printf("%ld\n", addi_res);
	return (0);
}
