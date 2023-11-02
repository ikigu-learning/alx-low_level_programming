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
  * @pr: location to copy string to
  * @s1: first string to copy
  * @s2: second string to copy
  * @l1: length of s1
  * @n: limit of bytes to copy from s2
  *
  * Return: Nothing
  */

void copy_string(char *pr, char *s1, char *s2, unsigned int l1, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	while (i < l1)
	{
		pr[i] = s1[j];
		i++;
		j++;
	}

	j = 0;

	while (j < n)
	{
		pr[i] = s2[j];
		i++;
		j++;
	}

	pr[i] = '\0';
}


/**
  * string_nconcat - dynamically allocates memory
  * for two concatenated strings and copies s1
  * and n bytes of s2
  * @s1: first string
  * @s2: string to add to s1
  * @n: number of chars to copy from s2
  *
  * Return: pointer to allocated memory,
  * or NULL if allocation fails
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pr;
	size_t size;
	int l1;
	unsigned int l2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2) + 1;
	size = l1 + (n + 1);

	if (n >= l2)
	{
		size = l1 + l2;
		n = l2;
	}

	pr = malloc(sizeof(char) * size);

	if (!pr)
		return (NULL);

	copy_string(pr, s1, s2, l1, n);

	return (pr);
}

