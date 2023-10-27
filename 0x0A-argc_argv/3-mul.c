#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: number of arguments
  * @argv: an array of arguments
  *
  * Return: 0 if two arguments received,
  * 1 if 2 arguments aren't received
  */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);
}

