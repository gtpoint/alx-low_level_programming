#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defin a new type with following elements :
 * @name: name of the Dog
 * @age: age of the Dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
