#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: string to check
  * @accept: substring
  *
  * Return: number of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int length = 0;

	while (s[i] != '\0')
	{
		if (accept[j] == '\0')
		{
			break;
		}

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				length++;
				i++;
				j = 0;
				break;
			}
			else
			{
				j++;
			}
		}
	}

	return (length);
}
