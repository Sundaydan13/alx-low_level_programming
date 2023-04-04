#include "main.h"

/**
 * set_string - let the value of a pointer is equal to char
 * @s: pointer to pointer
 * @to: pointer (char)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
