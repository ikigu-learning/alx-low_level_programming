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
  *
  * rev_string - reverses a string in memory
  * @s: The string to reverse
  *
  * Return: Nothing
  */

void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;

	while (i < j)
	{
		if (i == j || i > j)
		{
			break;
		}

		char s = *(s + i);
		char e = *(s + j);

		*(s + i) = e;
		*(s + j) = s;

		i++;
		j--;
	}
}
