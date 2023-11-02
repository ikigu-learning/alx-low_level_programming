#include "main.h"
#include <stdlib.h>

/**
  * _strlen - calculates the length of a string
  * @s: the string to calculate the length of
  *
  * Return: length of string s
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
  * copy_string - copies s1 and s2 to a mem location
  * @ptr: location to copy string to
  * @s1: first string to copy
  * @s2: second string to copy
  * @length_s1: length of s1
  * @n: limit of bytes to copy from s2
  *
  * Return: Nothing
  */

void copy_string(char *ptr, char *s1, char *s2, unsigned int length_s1, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	while (i < (length_s1 - 1))
	{
		ptr[i] = s1[j];
		i++;
		j++;
	}

	j = 0;

	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}

	ptr[i] = '\0';
}


/**
  * string_nconcat - dynamically allocates memory
  * for two concatenated strings and copies s1
  * and n bytes of s2
  * @s1: first string
  * @s2: string to add to s1
  *
  * Return: pointer to allocated memory,
  * or NULL if allocation fails
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t size;
	unsigned int length_s1, length_s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length_s1 = _strlen(s1) + 1;
	length_s2 = _strlen(s2) + 1;
	size = length_s1 + n + 1;

	if (n >= length_s2)
	{
		size = length_s1 + length_s2;
		n = length_s2;
	}

	ptr = malloc(sizeof(char) * size);

	if (!ptr)
		return (NULL);

	copy_string(ptr, s1, s2, length_s1, n);

	return (ptr);
}

