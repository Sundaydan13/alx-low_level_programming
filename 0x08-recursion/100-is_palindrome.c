#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: reversed string
 *
 * Return: 1 if yes, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
