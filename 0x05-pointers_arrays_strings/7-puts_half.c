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
  * putsc - prints chars of a string
  * @start_index: index to start printing at
  * @character: char to print
  * @str: string whose chars are getting printed
  *
  * Return: Nothing
  */

void putsc(int start_index, char character, char *str)
{
	while (character != '\0')
	{
		character = *(str + start_index);

		if (character == '\0')
		{
			break;
		}

		_putchar(character);
		start_index++;
	}
}


/**
  * puts_half - prints last half of a string
  * @str: string to print last half of
  *
  * Return: Nothing
  */

void puts_half(char *str)
{
	int length = _strlen(str);

	if ((length % 2) != 0)
	{
		int start_index = (length - 1) / 2;
		char character = 'x';

		start_index++;

		putsc(start_index, character, str);
		_putchar('\n');
	}
	else
	{
		int start_index = length / 2;
		char character = 'x';

		putsc(start_index, character, str);
		_putchar('\n');
	}
}
