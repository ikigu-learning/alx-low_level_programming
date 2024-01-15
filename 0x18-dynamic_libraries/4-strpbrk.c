#include "main.h"

/**
  * _strpbrk - searches a string for any set of bytes
  * @s: string to search
  * @accept: byte to search
  *
  * Return: pointer to byte, if found. Else, NULL
  */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else
			{
				j++;
			}
		}

		i++;
		j = 0;
	}

	return (0);
}
