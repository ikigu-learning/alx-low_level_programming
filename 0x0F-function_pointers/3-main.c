#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - runs the program
  * @argc: count of arguments passed to program
  * @argv: an array of strings that are arguments
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answer = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", answer);

	return (0);
}
