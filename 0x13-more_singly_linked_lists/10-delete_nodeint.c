#include "lists.h"

/**
 * delete_nodeint_at_index - at a specified index in a linked list.
 *
 * @head: pointer to the first node in the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful
 * -1 if the index is out of range or the linked list is empty
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (!temp)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
