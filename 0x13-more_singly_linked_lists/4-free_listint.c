#include "lists.h"

/**
 * free_listint - this function that Frees a List.
 * @head: A pointer to the head of the List to be freed.
 */
void free_listint(listint_t *head)
{
	while(head)
	{
		free(head);
		head = head->next;
	}
}
