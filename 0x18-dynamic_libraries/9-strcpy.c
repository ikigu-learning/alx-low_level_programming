#include "main.h"

/**
  * _strcpy - copies string pointed by src to dest
  * @dest: where to copy to
  * @src: where to copy from
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int str_length = _strlen(src);
	int i = 0;

	while (i <= str_length)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);

}

