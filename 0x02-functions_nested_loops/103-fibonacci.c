#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define N 4000000
/**
 * main - entry of the program
 *
 * Return: always 0
 *
 */
int main(void)
{
	int sum = 0;
	long int fib[N];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < N; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < N; i++)
	{
		sum = sum + i;
		printf("%d", sum);
	}
	return (0);
}
