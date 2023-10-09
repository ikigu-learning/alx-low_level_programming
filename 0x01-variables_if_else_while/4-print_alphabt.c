#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char a = 'a';

	while (a < 123)
	{
		if (a != 'e' && a !='q')
		{
			putchar(a);
			a++;
		}
	}

	putchar('\n');

	return (0);
}
