#ifndef DOG_H
#define DOG_H
/**
 * struct dog - New structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;
#endif
