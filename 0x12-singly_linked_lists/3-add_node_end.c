#include "lists.h"
#include <string.h>

/**
 * add_node_end - this function that Adds a new node at the end
 *                of a list.
 * @head: pointer the head of the list.
 * @str: string to be added to the list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *current, *last;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(current);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	current->str = duplicate;
	current->len = length;
	current->next = NULL;

	if (*head == NULL)
		*head = current;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = current;
	}

	return (*head);
}
