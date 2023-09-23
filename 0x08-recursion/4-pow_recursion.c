#include "main.h"
/**
 * _pow_recursion - gives the power of an integer
 * @x: intger to be multiply
 * @y: integer to be raised
 *
 * Return: value of the power an integer to an integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}
