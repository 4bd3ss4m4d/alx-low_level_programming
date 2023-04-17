#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - creates a new dog structure
 * @name: pointer to the name string
 * @age: age of the new dog
 * @owner: pointer to the owner string
 *
 * Return: pointer to the new dog structure if successful,
 * NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = _strdup(name),
	owner_copy = _strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		return (NULL);
	}

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

/**
 * _strdup - creates a duplicate of a string in a new memory block
 * @str: pointer to the string to be duplicated
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size, i;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		dup[i] = str[i];

	return (dup);
}
