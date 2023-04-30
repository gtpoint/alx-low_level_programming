#include "lists.h"

/**
 * add_nodeint - this function that Adds a new node at the beginning
 *               of a list.
 * @head: A pointer to the address of the
 *        head of the list.
 * @n: value of the new node to be add at the beginning.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
