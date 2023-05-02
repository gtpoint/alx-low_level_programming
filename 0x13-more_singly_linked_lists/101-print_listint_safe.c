#include "lists.h"
#include <stdio.h>

size_t looped_list_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_list_len - this function that Counts the number
 *             of unique nodes in a looped listint_t linked list.
 * @head: A pointer to the head of the list checked.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_list_len(const listint_t *head)
{
	const listint_t *ahead, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ahead = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (ahead == hare)
		{
			ahead = head;
			while (ahead != hare)
			{
				nodes++;
				ahead = ahead->next;
				hare = hare->next;
			}

			ahead = ahead->next;
			while (ahead != hare)
			{
				nodes++;
				ahead = ahead->next;
			}

			return (nodes);
		}

		ahead = ahead->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this function that Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num, index = 0;

	num = looped_list_len(head);

	if (num == 0)
	{
		for (; head != NULL; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < num; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num);
}
