#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

/**
 * main - exectution starts, function prints opcodes
 *
 * print_opcodes - program that prints the opcodes of its own main function
 *
 * Return; 0 on success or 1 , 2 on a failure
 */

void print_opcodes(void);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)

	{
		printf("Error\n");
		return (2);
	}

	void print_opcodes(void) /*prints the ocodes of the main function*/
	{
		unsigned char *ptr = (unsigned char *)print_pocodes;

		for (int i = 0; i < (int)print_opcodes - (int)main; i++)
			printf("%02x", ptr[i]);
	}

	printf("\n");
}
