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
	
	//checks for malloc failure, terminates function call
	if (!doggo)
		return (NULL);

	doggo->name = strdup(name);

	//checks failure of malloc in strdup, frees mem and returns
	if (!doggo->name)
	{
		free(doggo);
		return (NULL);
	}

	doggo->age = age;
	doggo->owner = strdup(owner);

	//checks failure of malloc in strdup, frees mem and returns
	if (!doggo->owner)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	return (doggo);
}
