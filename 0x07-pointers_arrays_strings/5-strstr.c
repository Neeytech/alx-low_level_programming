#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
		char *h, *n;

				while (*haystack)
		{
				h = haystack;
				n = needle;

				while (*haystack && *n && (*haystack == *n))
				{
						haystack++;
						n++;
				}

				if (!*n)
					return (h);

				haystack = h + 1;
		}

		return (NULL);
}
