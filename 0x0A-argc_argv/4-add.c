#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * main - adds positive numbers
  * @argc: number of arguments passed
  * @argv: array of arguments passed
  *
  * Return: 1 if number contains non-digit symbols,
  * 0 otherwise
  */

int main(int argc, char *argv[])
{
	int i, j, k, res;
	res = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("%s\n", "Error");
				
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		res+= atoi(argv[k]);
	}

	printf("%d\n", res);

	return (0);
}

