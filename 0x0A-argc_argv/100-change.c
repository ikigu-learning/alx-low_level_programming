#include <stdio.h>
#include <stdlib.h>

/**
  * main - returns min num of coins given as change
  * @argc: number of arguments
  * @argv: an array of the arguments given
  *
  * Return: 1 if no arguments are provided,
  * 0 otherwise
  */

int main(int argc, char *argv[])
{
	int n, i, num_coins;
	int cent_denoms[5] = {25, 10, 5, 2, 1};

	num_coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("%c\n", '0');
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (n % cent_denoms[i] == n)
		{
			continue;
		}
		else if (n % cent_denoms[i] == 0)
		{
			num_coins += n / cent_denoms[i];
			break;
		}
		else
		{
			num_coins += n / cent_denoms[i];
			n = n % cent_denoms[i];
		}
	}

	printf("%d\n", num_coins);
}

