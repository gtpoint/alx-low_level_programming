#include "lists.h"

/**
 * add_nodeint_end - this function that Adds a new node at the
 *                   end of a list.
 * @head: A pointer to the address of the
 *        head of the list.
 * @n: The integer for new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;

		(*head)->next = new_node;
	}
	return (new_node);
}
