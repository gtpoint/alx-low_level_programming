#include "lists.h"

/**
 * delete_nodeint_at_index - this function that Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *node = *head;
	unsigned int tmp = 0;

	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (tmp < (index - 1))
	{
		if (node->next == NULL)
			return (-1);

		node = node->next;
		tmp++;
	}

	current = node->next;
	node->next = current->next;
	free(current);
	return (1);
}
