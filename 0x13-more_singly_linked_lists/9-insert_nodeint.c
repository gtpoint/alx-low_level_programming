#include "lists.h"

/**
 * insert_nodeint_at_index - this function that Inserts a new node to
 *                     a listint_t list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices starting from 0.
 * @n: The integer for the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *node = *head;
	unsigned int tmp;

	if (node == NULL || node->next)
		return (NULL);

	current = malloc(sizeof(listint_t));

	if (current == NULL)
		return (NULL);

	current->n = n;
	for (tmp = 0; tmp < idx; tmp++)
		node = node->next;

	current->next = node;
	node->next = current;

	return (current);
}
