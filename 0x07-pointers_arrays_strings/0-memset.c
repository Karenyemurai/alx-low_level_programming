#include "main.h"
/**
 * _memset - fill a block memory with a specific value
 * @s: starting address of memory being  filled
 * @b: the desired value
 * @n: number of bites being changed
 *
 * Return: changed array with a new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
