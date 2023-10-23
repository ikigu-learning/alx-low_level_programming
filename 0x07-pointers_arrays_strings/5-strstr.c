#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: The string to find a character in
  * @c: The character to find
  *
  * Return: pointer to first occurence of c if found.
  * NULL otherwise
  */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *nil = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		i++;
	}

	return (nil);
}

/**
  * _strstr - locates a substring
  * @haystack: Mother string
  * @needle: baby string
  *
  * Return: pointer to beginnign of substring
  * or NULL if no substring
  */

char *_strstr(char *haystack, char *needle)
{
	return (_strchr(haystack, needle[0]));
}
