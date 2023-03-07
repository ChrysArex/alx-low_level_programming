#include "main.h"

/**
 * set_string - set value
 * Description:sets the value of a pointer to a char.
 * @s: where we change
 * @to: in what we change
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
