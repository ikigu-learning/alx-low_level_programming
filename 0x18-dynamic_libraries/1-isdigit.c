#include "main.h"

/**
  *_isdigit - checks whether character is a digit
  * @c: character to check
  *
  * Return: 1 if digit, 0 if otherwise
  */

int _isdigit(int c)
{
	int nine = '9';
	int zero = '0';

	if (c >= zero && c <= nine)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
