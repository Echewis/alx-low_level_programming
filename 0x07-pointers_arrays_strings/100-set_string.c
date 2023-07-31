#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to the pointer to a char.
 * @to: pointer to the char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
