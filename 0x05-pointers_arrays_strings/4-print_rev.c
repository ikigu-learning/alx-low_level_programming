#include "main.h"

/**
  * _strlen - calculates the length of a string
  * @s: the string to calculate the length of
  *
  * Return: Length of string s
  */

int _strlen(char *s)
{
	int chars = 0;
	char characters = *s;

	while (characters != '\0')
	{
		characters = *(s + chars);

		if (characters == '\0')
		{
			break;
		}

		chars++;
	}

	return (chars);
}

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
