#include "main.h"
/**
 * print sign - print sign of the number
 * @n: to check the number
 * Return: 1 and prints + if n is greater than zero,Returns 0 and prints 0 if n is zero,Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchhar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchhar('0');
		return (0);
	}
	else
	{
		_putchhar('-');
		return (-1);
	}
}
