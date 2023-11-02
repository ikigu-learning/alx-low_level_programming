#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for nmemb blocks,
  * each of size size
  * @nmemb: number of mem blocks
  * @size: size of each mem blocks
  *
  * Return: ptr on succes, NULL on failure
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
