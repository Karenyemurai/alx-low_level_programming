#include "main.h"
#include <unistd.h>

/**
 * putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and ernno is set approximately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
