#include "main.h"
#include <stdlib.h>

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
  * _strncat - concatenates strings dest and src
  * @dest: string to add to
  * @src: string added to dest
  * @n: limit of what to take from src
  *
  * Return: pointer to resulting string, dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int d = _strlen(dest);
	int z = 0;

	while (n > z && *(src + z) != '\0')
	{
		*(dest + d) = *(src + z);
		z++;
		d++;
	}

	*(dest + d) = '\0';

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
	char *ret;
	char *src;
	int size;

	size = _strlen(s1) + _strlen(s2) + 1;

	ret = malloc(sizeof(char) * size);

	if (!ret)
	{
		return (0);
	}

	src = _strncat(s1, s2, _strlen(s2));
	_strncpy(ret, src, _strlen(src));

	return (ret);
}
