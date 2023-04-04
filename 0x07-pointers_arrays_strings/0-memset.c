#include "main.h"

/**
 * _memset - function that fills with a constant byte
 * @s: memory area to be filled
 * @b: char to be copied
 * @n: the number of times to copy b
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
