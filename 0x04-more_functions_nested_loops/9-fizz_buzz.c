#include <stdio.h>

/**
  * main - prints 0 to 100
  *
  * Description: If a number is divisible by 3,
  * this function prints Fizz.
  * If a number is divisible by 5,
  * this function prints Buzz.
  * But if a number is divisible by both 5 and 5,
  * this function prints FizzBuzz
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if (x % 5 == 0 && x % 3 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (x == 100)
		{
			printf("%s ", "Buzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", x);
		}
	}

	return (0);
}
