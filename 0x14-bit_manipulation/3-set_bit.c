#include "main.h"

/**
 * set_bit - sets bit to a given index to 1
 * @index: the given index
 * @n: the number whose bit to set
 *
 * Return: 1 if it worked, -1 if error occurs
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask =  1UL << (index);

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n = *n | mask;

	return (1);
}
