#include "main.h"

/**
 * main - This program prints minimun number of coins..
 * @argc: values of the coins..
 * @argv: Values of the number of changes.
 * Return: Return 0 on success and 1 on failure.
 */

int main(int argc, char *argv[])
{
	int money[] = {25, 10, 5, 2, 1};
	int amount, min_c_change, a;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	min_c_change = 0;
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && amount >= 0; a++)
	{
		while (amount >= money[a])
		{
			min_c_change++;
			amount = amount - money[a];
		}
		printf("%d\n", min _c_change);
		return (0);
	}

