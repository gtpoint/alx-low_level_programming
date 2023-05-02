#include "lists.h"

/**
 * reverse_listint - this function that Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous = NULL;

	for (i = 0; (*head)->next != NULL; i++)
	{
		tmp = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = tmp;
	}

	(*head)->next = previous;

	return (*head);
}
