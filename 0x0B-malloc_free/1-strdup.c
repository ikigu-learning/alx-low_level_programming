#include "main.h"
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
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: the string to write to the new memory allocation
  *
  * Return: pointer to the string, NULL if memory is insufficient
  */

char *_strdup(char *str)
{
	int size;
	char *dest;

	size = _strlen(str);
	dest = malloc((sizeof(char) * size) + 1);

	if (!str)
	{
		return (NULL);
	}

	if (!dest)
	{
		return (NULL);
	}

	_strncpy(dest, str, size);

	return (dest);
}
