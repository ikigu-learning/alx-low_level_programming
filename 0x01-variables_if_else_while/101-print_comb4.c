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
	int p = 50;

	while (n < 56)
	{
		if (n < m && m < p)
		{
			putchar(n);
			putchar(m);
			putchar(p);
		
			if (n == 55)
			{
				putchar('\n');
				break;
			}

			putchar(',');
			putchar(' ');
		}
		
		if (p == 57 && m < 57)
		{
			p = 48;
			m++;
		}
		
		else if (p == 57 && m == 57)
		{
			p = 48;
			m = 48;
			n++;
		}
		p++;
	}
	return (0);
}
