#include "main.h"

/**
  * _isalpha - checks whether a character is alphabetic
  * @c: The character to be checked
  *
  * Return: 1 if the character is alphabetic. 0 if otherwise
  */

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c > 64 && c <91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
