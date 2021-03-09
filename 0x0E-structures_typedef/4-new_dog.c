#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strdup_own - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @owner: String to be duplicated.
 * Return: Pointer to the duplicate of str, NULL if str = NULL or if
 * insufficient memory is available.
 */
char *_strdup_own(char *owner)
{
	char *dupli_own;
	int len = 0, i;

	if (owner == NULL)
		return (NULL);
	while (owner[len])
		len++;
	dupli_own = malloc(sizeof(char) * len + 1);
	if (!dupli_own)
		return (NULL);
	for (i = 0; owner[i]; i++)
		dupli_own[i] = owner[i];
	dupli_own[i] = '\0';
	return (dupli_own);
	free(dupli_own);
}
/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @name: String to be duplicated.
 * Return: Pointer to the duplicate of str, NULL if str = NULL or if
 * insufficient memory is available.
 */
char *_strdup(char *name)
{
	char *dupli_name;
	int len = 0, i;

	if (name == NULL)
		return (NULL);
	while (name[len])
		len++;
	dupli_name = malloc(sizeof(char) * len + 1);
	if (!dupli_name)
		return (NULL);
	for (i = 0; name[i]; i++)
		dupli_name[i] = name[i];
	dupli_name[i] = '\0';
	return (dupli_name);
	free(dupli_name);
}
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
	new_doggy->name = _strdup(name);
	new_doggy->age = age;
	new_doggy->owner = _strdup_own(owner);
	return (new_doggy);
}