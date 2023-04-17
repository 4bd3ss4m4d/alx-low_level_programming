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
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
