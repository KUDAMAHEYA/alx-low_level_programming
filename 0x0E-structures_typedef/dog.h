#include <stdio.h>
#include "dog.h"

/**
 * struct dog - Dog's data
 * @name: dogs name.
 * @age: dog's age.
 * @owner: dogs owner.
 *
 * Description: The characteristic of a dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog == NULL)
		dog = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
