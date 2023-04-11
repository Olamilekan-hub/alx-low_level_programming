#include "main.h"

/**
 * sqrt_helper - recursive helper function to find the sqrt of a num
 * @n: the number to calc the sqrt of
 * @low: The lowest possible value for the sqrt
 * @high: The hihgest possible value for the sqrt
 *
 * Return: the sqrt of n, or -1 if n does not have a natural sqrt
 */
int sqrt_helper(int num, int  root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}

	return  (sqrt_helper(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural sqrt of a number
 * @n: the number to calc the sqrt
 *
 * Return: the sqrt of n, or -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	
	if (n == 1)
	{
		return (1);
	}
	
	return (sqrt_helper(n, root));
}
