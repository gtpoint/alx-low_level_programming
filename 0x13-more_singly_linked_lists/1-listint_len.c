#include "lists.h"
#include <stdio.h>

/**
 * listint_len - this function that Returns the number of elements
 *               in a linked list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the list @h.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
