#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: 1 (Success)
* When there's error, - 1 is returned, and error appropriately set.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
