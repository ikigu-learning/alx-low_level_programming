#include "main.h"

/**
 * clear_bit - sets a bit at given index to 0
 * @n: the number whose bit to clear
 * @index: the index of the bit to clear
 *
 * Return: 1 if it works, -1 if error occurs
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask =  1UL << (index);

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = ~mask;

	*n = *n & mask;

	return (1);
}
