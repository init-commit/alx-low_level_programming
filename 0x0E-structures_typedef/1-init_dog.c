#include "dog.h"
#include <stddef.h>

/**
* init_dog - initialize a variable of type struct dog
* @d: struct
* @name: name
* @age: age
* @owner: owner
* Description: struct of a dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
