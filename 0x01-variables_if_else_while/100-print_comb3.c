#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n = 48;
	int m = 49;

	while (m <= 58)
	{
		if (n == 57 && m == 48)
		{
			putchar('\n');
			break;
		}

		if (n < m && n != m)
		{
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');
		}

		m++;

		if (m == 58)
		{
			m = 48;
			n++;
		}

	}

	return (0);
}
