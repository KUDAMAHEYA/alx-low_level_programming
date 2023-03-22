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
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
