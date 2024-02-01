#include "main.h"

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
