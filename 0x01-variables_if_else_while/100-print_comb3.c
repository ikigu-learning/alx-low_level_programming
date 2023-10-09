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

	while (n < 58 && m < 58)
	{
		if (n < m && n != m)
		{
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');
			m++;
		}

		if (m == 57)
		{
			m = 48;
			n++;
		}

		if (n == 56 && m == 57)
		{
			putchar('\n');
			break;
		}
	}
}
