#include "variadic_functions.h"
#include <stdarg.h>

/**
 * main - function that return all the sum of the parameter
 *
 * Return: if n==0 always on success
 */

int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int i, sum = 0;


		va_start(ap, n);


		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}
