#include "main.h"

/**
  * _memcpy - copies a memory area
  * @src: area to copy from
  * @dest: area to copy to
  * @n: number of bytes to copy
  *
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}

	return (dest);
}
