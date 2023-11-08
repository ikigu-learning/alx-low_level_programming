#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function given as parameter
  * on each element of an array
  * @array: array to iterate over
  * @size: size of array
  * @action: function to execute
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
