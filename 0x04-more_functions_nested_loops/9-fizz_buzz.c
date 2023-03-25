#include "main.h"
#include <stdio.h>
/**
 * main - point of entry
 * Description:Print the number 1 - 100
 * 3 multiples print fizz, 5 multiples print buzz
 * prints fizzbuzz for multiples of both
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
