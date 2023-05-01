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
	char len_str[10];
	
	for (; h != NULL; h = h->next, s++)
	{
		int i = 0;
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		
		else
		{
			unsigned int len = h->len;
			while (len > 0)
			{
				len_str[i++] = (len % 10) + '0';
				len /= 10;
			}
			len_str[i] = '\0';
			_putchar('[');
			for (int j = i - 1; j >= 0; j--)
			{
				_putchar(len_str[j]);
			}
			_putchar(']');
			_putchar(' ');
			for (i = 0; h->str[i] != '\0'; i++)
			{
				_putchar(h->str[i]);
			}
			_putchar('\n');
		}
	}
	return (s);
}
