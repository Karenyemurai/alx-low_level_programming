#include "main.h"

/**
 * _pow_recursion - Returns the value of x
 * @x: the value to multiply
 * @y: the times which the value is to be multiplied
 *
 * Return: the value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
