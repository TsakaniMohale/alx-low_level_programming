#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, but for multiples of the print
 * fizz instead of the number and for the multiples of print Buzz, for
 * numbers which are multiples of both three and five print Fizzbuzz
 *
 * Return: always (0) success
 */
int main(void)
{
	int i;

	for (i =1; i <=100; i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			printf("Fizzbuzz ");
		}
		else if (i % 5 == 0)
		{
			if(i != 100)
			{
				printf("Buzz ");
			}
			else 
			{
				printf("fizz");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d ", i);
		}
		printf("\n");
		return (0);
	}

