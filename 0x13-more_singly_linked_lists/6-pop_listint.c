#include "lists.h"

/**
 * Function: pop_listint
 *
 * Deletes the head node of a linked list.
 *
 * @head: pointer to the first element in the linked list
 *
 * Returns:
 * - the data inside the element that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	if (!head || !(*head))
	{
		return (0);
	}

	int num = (*head)->n;
	listint_t* temp = (*head)->next;

	free(*head);

	(*head) = temp;

	return (num);
}
