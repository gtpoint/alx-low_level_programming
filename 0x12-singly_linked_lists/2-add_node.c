#include "lists.h"
#include <string.h>

/**
 * add_node - this function that Adds a new node at the beginning
 *            of a list.
 * @head: pointer to the head of the list.
 * @str: string to be added to the list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = duplicate;
	new->len = length;
	new->next = *head;

	*head = new;

	return (new);
}
