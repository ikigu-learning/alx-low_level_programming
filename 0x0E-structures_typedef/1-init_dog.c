#include "dog.h"
#include <string.h>

/**
  * init_dog - initializes a variable of type struct dog
  * @d: dog
  * @name: name of dog
  * @age: age of dog
  * @owner: dog's owner
  * 
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	d->name = name;
	d->age = age;
	d->owner = owner;
}

