#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	char buf[20];

	for (; h != NULL; h = h->next, s++)
	{
		if (h->str == NULL)
			write(STDOUT_FILENO, "[0] (nil)\n", 11);
		else
		{
			int len = snprintf(buf, 20, "[%u] %s\n", h->len, h->str);
			write(STDOUT_FILENO, buf, len);
		}
	}
	return (s);
}
