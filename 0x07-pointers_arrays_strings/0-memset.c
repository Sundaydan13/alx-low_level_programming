#include "main.h"
/**
 * _memset - fill memory with a certain value
 * @s begin with the  address of memory
 * @b: desired value
 * @n: number of bytes to change
 *
 * Return: changed array with latest  value for n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
