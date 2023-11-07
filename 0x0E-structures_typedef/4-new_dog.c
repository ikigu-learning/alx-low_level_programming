#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: dog's owner
  *
  * Return: pointer to dog
  *
  * Description: uses struct dog from dog.h"
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo = malloc(sizeof(dog_t));

	if (!doggo)
		return (NULL);

	doggo->name = strdup(name);

	if (!doggo->name)
	{
		free(doggo);
		return (NULL);
	}

	doggo->age = age;
	doggo->owner = strdup(owner);

	if (!doggo->owner)
	{
		free(doggo);
		free(doggo->name);
		return (NULL);
	}

	return (doggo);
}
