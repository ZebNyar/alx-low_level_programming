#include "main.h"

/**
 * _strpbrk - entry point
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
