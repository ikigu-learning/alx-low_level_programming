#include "main.h"
#include "2-strchr.c"
#include "4-strpbrk.c"

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

	if (start != 0)
	{

		while (needle[i] != '\0')
		{
			if (needle[i] != start[i])
			{
				return (0);
			}

			i++;
		}

		return (start);
	}

	return (0);
}
