#include "lists.h"

/**
 * get_nodeint_at_index - return a node at a particular index in a list
 *
 * Returns - a pointer to the node at a specified index in a linked list.
 *
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Returns: pointer to the node at the specified index
 * - NULL if the index is out of range or the linked list is empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current);
}
