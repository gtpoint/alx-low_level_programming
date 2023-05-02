#include "lists.h"

/**
 * free_listint - this function that Frees a List.
 * @head: A pointer to the head of the List to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
