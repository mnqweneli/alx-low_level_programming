#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable type
 * @d: pointer variable
 * @name: used to initisalize the name
 * @age: used to initialize the age
 * @owner: used to initialize the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
