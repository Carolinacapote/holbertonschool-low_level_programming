#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: Of the dog.
 * @age: Of the dog.
 * @owner: Of the dog.
 * Return: New dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggy;

	new_doggy = malloc(sizeof(dog_t));
	if (!new_doggy)
		return (NULL);
	new_doggy->name = name;
	new_doggy->age = age;
	new_doggy->owner = owner;
	return (new_doggy);
}
