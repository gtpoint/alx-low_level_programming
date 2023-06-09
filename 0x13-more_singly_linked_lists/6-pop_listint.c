#include "lists.h"

/**
 * pop_listint - this function that Delete the head node of the List.
 * @head: A pointer to the address of the
 *        head of the List.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int data;

	if (*head == NULL)
		return (0);

	del = (*head);
	*head = (*head)->next;
	data = del->n;
	free(del);

	return (data);
}
