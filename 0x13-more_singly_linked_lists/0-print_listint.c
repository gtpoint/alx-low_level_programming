#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this function that Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t counter = 0;

	ptr = h;
	while(ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
