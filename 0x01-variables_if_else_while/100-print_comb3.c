#include <stdio.h>
/**
* main - Prints all possible different combinations of two digits
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, n;
	
	for (n = 48; n <= 56; n++)
	{
		for (n = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	putcher('\n');
	return (0);
}
