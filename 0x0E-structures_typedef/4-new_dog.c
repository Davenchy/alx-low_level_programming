#include <stdlib.h>
#include <string.h>
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
		/* if name is not NULL */
		if (name)
		{
			/* copy name or clear on fail*/
			d->name = strdup(name);
			if (!(d->name))
			{
				free(d);
				return (NULL);
			}
		}
		d->age = age;
		/* if owner is not null */
		if (owner)
		{
			/* copy owner or clear on null */
			d->owner = strdup(owner);
			if (!(d->owner))
			{
				/* if name is already defined the free the copy */
				if (d->name)
					free(d->name);
				free(d);
				return (NULL);
			}
		}
	}
	return (d);
}
