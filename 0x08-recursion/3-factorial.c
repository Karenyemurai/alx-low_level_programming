#include "main.h"

/**
 * factorial - The factorial of a number
 * @n: the number used to calculate the factorial
 *
 * Return: value of integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
