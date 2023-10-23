#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: The area of memory to fill
  * @b: The byte to fill with
  * @n: number of bytes to fill
  *
  * Return: pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && s[i] != '\0')
	{
		s[i] = b;
		i++;
	}

	return (s);
}
