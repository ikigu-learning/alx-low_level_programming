#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
  * print_dog - prints a struct dog
  * @d: the dog to print
  *
  * Return: Nothing
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}

	if (isnan(d->age))
	{
		printf("Age: nil\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}

