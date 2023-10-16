#include "main.h"

/**
  * _strlen - calculates the length of a string
  * @s: the string to calculate the length of
  *
  * Return: Length of string s
  */

int _strlen(char *s)
{
	int chars = 1;
	char characters;
	int counter = 0;

	while (characters != '\0')
	{
		characters = *s + counter;
		chars++;
	}

	return (chars);
}
