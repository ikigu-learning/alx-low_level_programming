#include "main.h"

/**
  * _islower - checks whether a character is lowercase
  * @c: The character to be checked
  *
  * Return: 1 if the character is lowercase. 0 if otherwise
  */

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
