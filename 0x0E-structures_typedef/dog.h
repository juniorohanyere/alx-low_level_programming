#ifndef DOG_H

#define DOG_H

/**
 * struct dog - a structure
 *
 * @name: name of a dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
*/

struct dog
{
	char *name, *owner;
	float age;
};

/**
 * new_dog - typedef for struct dog
 *
*/

typedef struct dog dog_t;

void init_dog(struct dog *ndog, char *name, float age, char *owner);
void print_dog(struct dog *ndog);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *ndog);

#endif	/* DOG_H */
