#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: Pointer to dog.
 * @name: Of the dog.
 * @age: Of the dog.
 * @owner: Of the dog.
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
