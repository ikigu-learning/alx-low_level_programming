#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory and checks for success
  * @b: size of memory to allocate
  *
  * Return: pointer to allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}

