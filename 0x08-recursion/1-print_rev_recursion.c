#include "main.h"

/**
 * _print_rev_recursion - a string to be printed in reverse
 * @s: the string to be reversed
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
