#include "main.h"

/**
  * print_rev - prints a string to stdout in reverse
  * @s: the string to print
  *
  * Return: Nothing
  */

void print_rev(char *s)
{
	int counter = _strlen(s);
	char character;

	while (counter > -1)
	{
		character = *(s + counter);
		_putchar(character);
		counter--;
	}

	_putchar('\n');
}
