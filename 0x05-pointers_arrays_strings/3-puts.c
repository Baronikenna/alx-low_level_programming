#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 *
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
	if (str == NULL)
		return;

	while (*str)
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
