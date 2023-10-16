#include "main.h"

/**
  * _strlen - calculates the length of a string
  * @s: the string to calculate the length of
  *
  * Return: Length of string s
  */

int _strlen(char *s)
{
	int elem_length = sizeof(char);
	int arr_length = sizeof(*s) - elem_length;

	int chars = arr_length / elem_length;

	return (chars);
}
