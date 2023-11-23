#include "main.h"
#include <stdio.h>

/**
* print_binary - prints an ul to in binary
* @n: the ul to print
*
* Return: Nothing
*/

void print_binary(unsigned long int n)
{
	unsigned long int comparator = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int previous = 0;

	while (comparator > 0)
	{
		if ((n & comparator) == comparator)
		{
			_putchar('1');
			previous = 1;
		}
		else if (n == 0)
		{
			_putchar('0');
			break;
		}
		else if (previous == 1)
		{
			_putchar('0');
		}

		comparator = comparator >> 1;
	}
}
