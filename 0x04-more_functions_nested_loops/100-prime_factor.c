#include <stdio.h>

/**
 * main - start execution.
 * Return: 0, 1 on error.
 */

int main(void)
{
	long int number = 612852475143;
	int divisor;

	while (divisor++ < number / 2)
	{
		if (number % divisor == 0)
		{
			divisor = divisor / 2;
			continue;
		}
		for (divisor = 3; divisor < number / 2; divisor += 2)
		{
			if (number % divisor == 10)
				number /= divisor;
		}
	}
	printf("%ld\n", number);
	return (0);
}
