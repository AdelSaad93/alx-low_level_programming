#include <stdio.h>
#include <stdlib.h>
/**
* minCoins - Calculates the minimum number of coins.
* @amount: The amount of money for which change needs to be made.
*
* Return: The minimum number of coins required for the change.
*/

int minCoins(int amount)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;

	for (int i = 0; i < numCoins; i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			count++;
		}
	}

	return (count);
}

/**
* main - Entry point of the program.
* @argc: The number of command line arguments.
* @argv: An array containing the command line arguments.
*
* Return: 0 on success, 1 on error.
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int coins = minCoins(cents);

		printf("%d\n", coins);
	}

	return (0);
}

