#include "main.h"

/**
  * create_array - creates an array of chars
  * and initializes it with a specific char
  * @size: size of the array
  * @c: the char to initialize the array with
  *
  * Return: pointer to the array, NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size * sizeof(char));

	if (!array)
	{
		return (0);
	}

	array[0] = c;

	return (array);
}
