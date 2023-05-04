#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; str[i] != '\0';
			i++)
	{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 'a' - 'A';
	}
	return (str);
}
