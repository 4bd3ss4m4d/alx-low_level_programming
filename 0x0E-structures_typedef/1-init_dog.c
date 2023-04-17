#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct dog variable to be initialized
 * @name: pointer to a string representing the name of the dog
 * @age: floating-point number representing the age of the dog
 * @owner: pointer to a string representing the owner of the dog
 *
 * Return: void
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
