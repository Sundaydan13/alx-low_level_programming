#include "lists.h"

/**
 * sum_listint - Calculates the sum of every data in a linked list.
 *
 * @head: pointer to the first node in the linked list
 *
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current;

	for (current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
