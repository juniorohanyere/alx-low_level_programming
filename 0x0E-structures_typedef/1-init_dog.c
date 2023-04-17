#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @ndog: input pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: return nothing
*/

void init_dog(struct dog *ndog, char *name, float age, char *owner)
{
	if (ndog)
	{
		ndog->name = name;
		ndog->age = age;
		ndog->owner = owner;
	}
}
