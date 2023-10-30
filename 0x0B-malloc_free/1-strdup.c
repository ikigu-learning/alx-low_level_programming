#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: the string to write to the new memory allocation
  *
  * Return: pointer to the string, NULL if memory is insufficient
  */

char *_strdup(char *str)
{
	int size;
	char *dest;

	size = _strlen(str);
	dest = malloc(sizeof(char) * size);

	if (!str)
	{
		return (0);
	}
	
	if (!dest)
	{
		return (0);
	}

	_strncpy(dest, str, size);

	return (dest);
}
