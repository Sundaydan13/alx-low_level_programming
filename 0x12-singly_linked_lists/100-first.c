#include <stdio.h>

void __attribute__ ((constructor)) first(void);

/**
 * first - The printed sentence should come before the main
 * Execution function
 *
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
