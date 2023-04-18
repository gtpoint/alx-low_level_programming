#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - this function that Finds the length of a string.
 * @str: The string to be printed.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	if (!(*str))
		return (0);

	else
		return (1 + _strlen(str + 1));
}

/**
 * _strcopy - this function that Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: first parameter.
 * @src: second parameter.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - this function that Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_created;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_created = malloc(sizeof(dog_t));
	if (dog_created == NULL)
		return (NULL);

	dog_created->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_created->name == NULL)
	{
		free(dog_created);
		return (NULL);
	}

	dog_created->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_created->owner == NULL)
	{
		free(dog_created->name);
		free(dog_created);
		return (NULL);
	}

	dog_created->name = _strcopy(dog_created->name, name);
	dog_created->age = age;
	dog_created->owner = _strcopy(dog_created->owner, owner);

	return (dog_created);
}
