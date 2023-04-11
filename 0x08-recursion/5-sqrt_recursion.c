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
		return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - recursive helper function to find the sqrt of a num
 * @n: the number to calc the sqrt of
 * @low: The lowest possible value for the sqrt
 * @high: The hihgest possible value for the sqrt
 *
 * Return: the sqrt of n, or -1 if n does not have a natural sqrt
 */
int sqrt_helper(int n, int low, int  high)
{
	int mid;

	if (high < low)
	{
		return (-1);
	}
	
	mid = (low + high) / 2;
	
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (sqrt_helper(n, low, mid -1));
	}
	else
	{
	return  (sqrt_helper(n, mid +1, high));
	}
}
