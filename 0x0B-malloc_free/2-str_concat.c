#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: the string to add to
  * @s2: the string getting added to s1
  *
  * Return: pointer to s1, NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int size;
	int *ret;

	size = _strlen(s1) + _strlen(s2) + 1;
	ret = malloc(size * sizeof(char));

	if (!size)
	{
		return (0);
	}

	_strncpy(ret, s1, _strlen(s1));
	_strncpy(ret[strlen(s1)], s2, _strlen(s2));
	ret[size] = '\0';

	return (ret);
}

