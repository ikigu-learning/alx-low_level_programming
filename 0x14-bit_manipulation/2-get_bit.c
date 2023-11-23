#include "main.h"

/**
* get_bit - gets bit at a given index
* @n: the number where bit will be gottent from
* @index: the index to get
*
* Return: the value of bit at or -1 if it error occurs
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask =  1UL << (index);

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	if ((n & mask) == mask)
		return (1);
	else
		return (0);
}
