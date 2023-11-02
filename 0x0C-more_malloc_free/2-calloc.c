#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	char *out;

	if (nmemb == 0 || size == 0)
		return (NULL);

	out = calloc(nmemb, size);
	if (out == NULL)
		return (NULL);
	else
		return (out);
}
