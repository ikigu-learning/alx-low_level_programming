#include "main.h"
#include "2-strchr.c"

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
	char *start = (_strchr(haystack, needle[0]));
	int i = 0;

	if (haystack[0] == '\0')
	{
		return (0);
	}

	if (start != 0)
	{

		while (needle[i] != '\0')
		{
			if (needle[i] != start[i])
			{
				haystack = start + 1;
				return (_strstr(haystack, needle));
			}

			i++;
		}
	}

	return (start);
}
