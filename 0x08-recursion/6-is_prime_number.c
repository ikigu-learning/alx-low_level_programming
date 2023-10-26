#include "main.h"

/**
  * is_prime_number - checks whether a number is prime
  * @n: number to check
  *
  * Return: 1 if prime, 0 if not
  */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}

	if (n == 1)
	{
		return (0);
	}

	if (n % 2 == 0)
	{
		return (0);
	}

	if (n % 3 == 0)
	{
		return (0);
	}

	if (n % 5 == 0)
	{
		return (0);
	}

	if (n % 7 == 0)
	{
		return (0);
	}

	return (1);
}
