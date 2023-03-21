#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @names: name of initialize
 * @age of initialize
 * @owner to initialize
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
