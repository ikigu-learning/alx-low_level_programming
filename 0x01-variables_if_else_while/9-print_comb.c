#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		if (n == '9')
		{
			putchar(n);
			break;
		}

		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}

	return (0);
}
