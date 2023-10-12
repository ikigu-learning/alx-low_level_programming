#include "main.h"

/**
  * _isupper - checks whether character is uppercase
  * @c: character to check
  * 
  * Return: 1 if the character is uppercase. 0 if otherwise
  */

int _isupper(int c)
{
	int z = 'Z';
	int a = 'A';

	if (c >= a && c <= z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

