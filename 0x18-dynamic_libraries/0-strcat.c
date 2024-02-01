#include "main.h"

/**
  * _strcat - concatenates strings dest and src
  * @dest: string to add to
  * @src: string added to dest
  *
  * Return: pointer to resulting string, dest
  */

char *_strcat(char *dest, char *src)
{
	int d = _strlen(dest);
	int s = _strlen(src);
	int z = 0;

	while (s >= z)
	{
		*(dest + d) = *(src + z);
		z++;
		d++;
	}

	return (dest);
}
