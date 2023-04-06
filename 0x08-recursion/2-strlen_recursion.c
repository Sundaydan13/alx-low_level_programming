#include "main.h"
/**
 * _strlen_recursion - Returns string length.
 * @s: string to use
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}

	return (n);
}
