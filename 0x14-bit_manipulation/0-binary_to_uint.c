#include "main.h"
#include <string.h>
#include <stdlib.h>

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
		char b = *(s + i);

		char e = *(s + j);

		if (i == j || i > j)
		{
			break;
		}

		*(s + i) = e;
		*(s + j) = b;

		i++;
		j--;
	}
}

/**
* binary_to_uint - converts a binary number to unsigned int
* @b: pointer to a string of 0s and 1s
*
* Return: the converted number or 0 if
* there is one or mor chars in string b that is not 0
* or b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int counter, power, uint;

	char *s, *d;

	d = malloc(sizeof(char) * (strlen(b) + 1));

	if (!d)
		return (0);

	counter = 0;
	power = 1;
	uint = 0;

	s = strcpy(d, b);

	if (!b)
		return (0);

	rev_string(s);

	while (s[counter])
	{
		if (s[counter] == '0' || s[counter] == '1')
		{
			uint += ((s[counter] - '0') * power);

			counter++;
			power *= 2;
		}
		else
		{
			return (0);
		}
	}

	free(d);
	return (uint);
}
