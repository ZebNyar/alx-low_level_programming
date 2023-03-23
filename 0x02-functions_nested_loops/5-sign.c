#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: To check the number
 * Return: 1 for the posetive number, -1 for negative numberor zero for anything else
 */

int print_sign(int n)
{
	if  (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
