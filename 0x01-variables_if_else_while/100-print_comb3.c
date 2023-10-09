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

	while (n < 57)
	{
		if (n < m)
		{
			putchar(n);
			putchar(m);

			if (n == 56)
			{
				putchar('\n');
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}


		if (m == 57)
		{
			m = 48;
			n++;
		}
		else
		{
			m++;
		}
	}

	return (0);
}
