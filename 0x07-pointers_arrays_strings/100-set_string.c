#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to poinetr
 * @to : pointer char
 */
void set_string(char **s, char *to)
{
		if (s == NULL)
			return;

		*s = to;
}
