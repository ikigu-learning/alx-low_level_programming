#include "main.h"

/**
  * _puts - prints string to stdout
  * @str: the string to print
  *
  * Return: Nothing
  */

void _puts(char *str)
{
	int counter = 0;
	char character;

	while (character != '\0')
	{
		character = *(str + counter);

		if (character == '\0')
		{
			break;
		}

		_putchar(character);
		counter++;
	}

	_putchar('\n');
}
