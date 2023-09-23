#include "main.h"

/**
 * sqrt_helper - recursive helper function to find the sqrt of a num
 * @num: The number to find the  the sqrt of
 * @root: the root to be tested
 *
 * Return: if the number has a natural square root - the square root.
 *		if the number does not have a natural square root - (-1)
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
