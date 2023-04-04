#include "main.h"
/**
 * _strchr - Starting point
 * @s: get in
 * @c: get in
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
