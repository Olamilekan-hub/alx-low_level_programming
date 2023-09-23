#include "main.h"
/**
 * factorial - function to get factorial of any given number
 * @n: number to supplynto the function
 *
 * Return: returns the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
