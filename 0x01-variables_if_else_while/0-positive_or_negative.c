#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program prints if the number is positive or negative
 * Return: 0
 */
int main(void)
{

	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)

	{

		printf("is positive\n");
	}
	if (n == 0)

	{
		printf("is zero\n");

	}

	if (n < 0)
	{

		printf("is negative\n");

	}

	return (0);
}
