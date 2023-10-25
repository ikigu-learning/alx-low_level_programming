#include "main.h"

/**
  * factorial - returns the factorial of a number
  * @n: The number to get a factorial for
  *
  * Return: The factorial of n
  *
  */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1 || n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
