#include "main.h"
#define NULL ((void *)0)

/**
  * _strchr - locates a character in a string
  * @s: The string to find a character in
  * @c: The character to find
  *
  * Return: pointer to first occurence of c
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		i++;
	}

	return (NULL);
}
