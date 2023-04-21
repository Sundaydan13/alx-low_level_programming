#include "variadic_functions.h"
#include <stdarg.h>

/**
 * main - function that return all the sum of the parameter
 *
 * Return: if n == 0 always on success
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	sum = n;
	n = (4, 6, 12, 16);

	if (n != 0)
	{
		_putchar_sum("%d\n", sum);
	}
	else
	{
		return(0);
	}
}
