#include "main.h"
/**
 * _isalpha - Checks for alphabet characters
 * @c: Character to be checked
 * Return: 1 if character is lower or upper case, otherwise return 0
 */

int _isalpha(int c)
{
	if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
