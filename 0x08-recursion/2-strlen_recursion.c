#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: The string to get the length for
  *
  * Return: length of string s
  *
  */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}

	return (i + _strlen_recursion(s + 1));
}
