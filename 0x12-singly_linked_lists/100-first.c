#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a line before the main
 * function is executed
 */
void first(void)
{
printf("You're beat! and yet, youmust allow,\n");
printf("I bore my house upon my back!\n");
}
