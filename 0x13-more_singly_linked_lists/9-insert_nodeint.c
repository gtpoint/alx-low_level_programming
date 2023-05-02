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
	unsigned int tmp = 0;

	current = malloc(sizeof(listint_t));

	if (current == NULL)
		return (NULL);

	if (idx == 0)
	{
		current->next = node;
		*head = current;
		return (current);
	}

	current->n = n;
	while (tmp < (idx - 1))
	{
		if (node == NULL || node->next == NULL)
			return (NULL);

		node = node->next;
		tmp++;
	}

	current->next = node->next;
	node->next = current;

	return (current);
}
