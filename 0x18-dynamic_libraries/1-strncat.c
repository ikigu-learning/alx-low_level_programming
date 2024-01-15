#include "main.h"

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
