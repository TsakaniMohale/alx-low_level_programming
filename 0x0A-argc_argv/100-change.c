#include "main.h"

/**
 * main - Execution start, calculate change with min coins.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 or 1, on success or failure respectively.
 */

int main(int argc, char **argv)
{
	int array_coins[] = {25, 10, 5, 2, 1};
	int tot_amnt, min_coins, i;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	tot_amnt = atoi(argv[1]);
	min_coins = 0;

	if (tot_amnt < 0)
	{
		printf("0\n");

		return (0);
	}

	for (i = 0; i < 5 && tot_amnt >= 0; i++)
	{
		while (tot_amnt >= array_coins[i])
		{
			min_coins++;
			tot_amnt = tot_amnt - array_coins[i];
		}
	}

	printf("%d\n", min_coins);

	return (0);
}
