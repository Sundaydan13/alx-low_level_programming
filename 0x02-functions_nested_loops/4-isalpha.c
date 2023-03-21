#include "main.h"

/**
 * _isalpha - a letter or not
 * @c: the character to be checked
 * Return: 1 if c is a leeter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
