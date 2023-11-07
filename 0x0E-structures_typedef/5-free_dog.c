#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees memory allocated to d
  * @d: the memory to clear
  *
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
