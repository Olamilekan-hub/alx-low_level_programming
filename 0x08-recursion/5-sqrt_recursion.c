#include "main.h"

int sqrt_helper(int n, int low, int high);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - Returns the natural sqrt of a number
 * @n: the number to calc the sqrt
 *
 * Return: The sqrt of n, or -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 0, n));
}

/**
 * sqrt_helper - recursive helper function to find the sqrt of a num
 * @n: the number to calc the sqrt of
 * @low: The lowest possible value for the sqrt
 * @high: The hihgest possible value for the sqrt
 *
 * Return: the sqrt of n, or -1 if n does not have a natural sqrt
 */
int sqrt_helper(int low, int  high)
{
	if ((high * high) == low)
	{
		return (high);
	}

	if (high == low  / 2)
	{
		return (-1);
	}
	
	return  (sqrt_helper(low, high + 1));
}
