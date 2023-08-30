#include "stdlib.h"
#include "dog.h"

/**
 * dog_t *new_dog - Function initialize a new dog structure.
 * @name: the name of the new dog.
 * @age: the age of the new dog.
 * @owner: the owner of the new dog.
 * Return: The new structure address.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int i, name_len, owner_len;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	for (name_len = 0; name[name_len]; name_len++)
		;
	new_d->name = malloc(sizeof(char) * (name_len++));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_d->name[i] = name[i];
	new_d->age = age;

	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	new_d->owner = malloc(sizeof(char) * (owner_len++));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		new_d->owner[i] = owner[i];
	return (new_d);
}
