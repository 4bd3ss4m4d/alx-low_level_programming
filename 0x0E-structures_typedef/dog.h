#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents a dog with its name, age, and owner
 * @name: name of the dog, represented as a string (char pointer)
 * @age: age of the dog, represented as a floating-point number
 * @owner: owner of the dog, represented as a string (char pointer)
 *
 * Description: This struct defines a dog with its name, age, and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */
