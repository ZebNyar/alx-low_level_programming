#include "main.h"

/**
 * _memcpy - a function that copies number of bytes from memory @src
 * to memory  @dest
 * @n: function copies
 * @src: bytes from the memory area
 * @dest: to memory area
 *
 * Return: the pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
			i++;
	}
	return (dest);
}
