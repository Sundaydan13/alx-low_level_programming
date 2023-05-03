#include "lists.h"

/**
 * reverse_listint - The linked list is to be reversed
 * @head: pointer to the first element or node in the list
 *
 * Return: pointer to the first element in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;

	listint_t *current_node = *head;

	listint_t *next_node = NULL;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;
	return (*head);
}
