#include "main.h"

/**
 * _sqrt - calculates the natural square root of a number
 * @b: test base
 * @n: number to get square root for
 *
 * Return: if natural square root, square root
 * else, -1
 */

int _sqrt(int b, int n)
{
	if (b * b == n)
	{
		return (b);
	}

	if (b * b > n)
	{
		return (-1);
	}

	return (_sqrt((b + 1), n));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: the number to get square root for
 *
 * Return: if natural square root, square root;
 * else, -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
