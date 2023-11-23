/**
* print_binary - prints an ul to in binary
* @n: the ul to print
*
* Return: Nothing
*/

void print_binary(unsigned long int n)
{
	unsigned long int comparator = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (comparator > 0)
	{
		if ((n & comparator) == comparator)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		comparator = comparator >> 1;
	}

	_putchar("\n");
}
