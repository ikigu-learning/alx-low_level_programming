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
  * _strcmp - compares two strings
  * @s1: the string to compare against
  * @s2: the string to compare
  *
  * Return: 0 if strings are equal.
  * 15 if first non-matching char
  * of s1 is greater than that of s2.
  * -15 if first non-matching character of s1
  * is lower than that of s2.
  */

int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int l = _strlen(s1);

	while (l >= n)
	{
		if (*(s1 + n) != *(s2 + n))
		{
			return (s1[n] - s2[n]);
		}

		n++;
	}

	return (0);
}
