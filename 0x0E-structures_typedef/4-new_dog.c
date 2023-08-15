#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new_dog - creates a new  (store copy of name, owner)
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nameLength, ownerLength, i;
	dog_t *dog;

	if (!name || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	for (nameLength = 0; name[nameLength]; nameLength++)
		;
	nameLength++;
	(*dog).name = malloc(nameLength * sizeof(char));
	if (!(*dog).name)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nameLength; i++)
		(*dog).name[i] = name[i];

	for (ownerLength = 0; owner[ownerLength]; ownerLength++)
		;
	ownerLength++;
	(*dog).owner = malloc(ownerLength * sizeof(char));
	if (!(*dog).owner)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerLength; i++)
		(*dog).owner[i] = owner[i];

	(*dog).age = age;

	return (dog);
}
