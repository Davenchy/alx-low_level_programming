#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog structure
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to the dog struct otherwise NULL on fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/* allocate memory for the struct */
	d = malloc(sizeof(char *) * 2 + sizeof(float));

	/* initialize the struct */
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}
