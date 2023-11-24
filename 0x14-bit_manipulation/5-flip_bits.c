#include "main.h"

/**
 * flip_bits - counts the number of bits that should be flipped
 * to get from one number to another
 * @n: one of the numbers
 * @m: the other of the numbers
 *
 * Return: number of bits that should be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int comp;

	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	unsigned int flipped = 0;

	while (mask > 0)
	{
		comp = 4;

		if ((mask & n) == mask)
			comp += 1;
		else
			comp -= 1;

		if ((mask & m) == mask)
			comp += 1;
		else
			comp -= 1;

		if (comp == 4)
			flipped++;

		mask >>= 1;
	}

	return (flipped);
}
