#include <stdlib.h>
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
  * _strncpy - copies a string from src to dest
  * @dest: where src is being copied to
  * @src: The source string
  * @n: The no of chars to copy from str
  *
  * Return: The pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (n > c)
	{
		if (c > _strlen(src))
		{
			*(dest + c) = '\0';
		}
		else
		{
			*(dest + c) = *(src + c);
		}

		c++;
	}

	return (dest);
}

/**
  * str_concat - concatenates two strings
  * @s1: the string to add to
  * @s2: the string getting added to s1
  *
  * Return: pointer to s1, NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int size;
	char *ret;

	if (!s1)
	{
		s1 = "";
	}

	if (!s2)
	{
		s2 = "";
	}

	size = _strlen(s1) + _strlen(s2) + 1;
	ret = malloc(size * sizeof(char));

	if (!ret)
	{
		return (0);
	}

	_strncpy(ret, s1, _strlen(s1));
	_strncpy(ret + _strlen(s1), s2, _strlen(s2));
	ret[size] = '\0';

	return (ret);
}

