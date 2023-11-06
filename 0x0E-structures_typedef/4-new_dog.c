#include "dog.h"
#include <stdlib.h>

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

	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	return (doggo);
}
