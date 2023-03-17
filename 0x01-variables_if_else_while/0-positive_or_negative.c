#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(5));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0) {
		printf("Line 1: n is positive \n");
	}
	if (n=0) {
		printf("Line 2: n is zero \n");
	}
	if (n<0) {
		printf("Line 3: n is negative \n");
	}
	return (0);
}
