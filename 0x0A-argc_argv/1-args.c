#include <stdio.h>

/**
  * main - prints number of arguments passed to it
  * @argc: number of arguments
  * @argv: an array of arguments
  *
  * Return: Always 0(Success)
  */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
