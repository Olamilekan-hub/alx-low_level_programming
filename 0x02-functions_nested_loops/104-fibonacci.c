#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point of the program
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i;
	unsigned int fib1 = 1, fib2 = 2, fib_i;

	printf("%d, %d, ", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib_i = fib1 + fib2;
		printf("%d", fib_i);
		if (i != 98)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fib_i;
	}
	printf("\n");
	return (0);
}
