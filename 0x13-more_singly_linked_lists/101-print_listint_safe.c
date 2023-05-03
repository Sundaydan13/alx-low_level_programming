#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the special nodes
 * contained in a looped listint_t linked list.
 * @head: pointer to check from the head of the listint_t.
 *
 * Return: 0 if the list is not looped.
 * else - the number of special nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	tortoise = head->next;
	hare = head->next->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints safely listint_t list.
 * @head: Pointer head of the listint_t list.
 *
 * Return: The number of elements or nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	onst listint_t *temp = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		nodes++;
		if (temp > temp->next)
		{
			temp = temp->next;
		}
		else 
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			return (nodes);
		}
	}

	return (nodes);
}
