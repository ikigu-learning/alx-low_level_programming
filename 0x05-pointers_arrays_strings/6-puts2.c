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
  * puts2 - prints every other character of str to stdout
  * @str: the string to print
  *
  * Return: Nothing
  */

void puts2(char *str)
{
	int counter = 0;
	char character;
	int length = _strlen(str);

	while (counter < length)
	{
		character = *(str + counter);

		if (character == '\0')
		{
			break;
		}

		_putchar(character);
		counter = counter + 2;
	}

	_putchar('\n');
}
