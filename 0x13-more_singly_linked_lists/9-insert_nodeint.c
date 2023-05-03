#include "lists.h"

/**
 * insert_nodeint_at_index - input a new node with certain
 * data at given index in a linked list.
 *
 * @head: pointer to the first node in the linked list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: NULL
 *     - pointer to the new node if successful
 *     - NULL if the index is out of range or memory allocation failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;
	if (!current)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
