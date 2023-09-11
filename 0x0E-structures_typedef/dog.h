#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog info
 * @name: name
 * @age: age
 * @owner: owner
 * Description: Basically a dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
