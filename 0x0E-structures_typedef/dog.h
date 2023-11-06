#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Declares a dog struct
  * @name: name of dog
  * @age: age of dog
  * @owner: dog's owner
  *
  * Description: Defines dog members
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
