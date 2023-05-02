#include <stdlib.h>
#include "list.h"
#include <stdio.h>

void __attribute__ ((constructor)) first(void);

/**
 * main - function call
 * first - The printed sentence should come before the main
 * Execution function
 *
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

int main(void)
{
	first();

	return (0);
}
