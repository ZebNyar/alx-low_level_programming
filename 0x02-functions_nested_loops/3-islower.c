#include "main.h"
/**
 * _islower - Check if character is lower case
 * @c: the character is going to be checked
 * Return: 1 if character is lower case, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
