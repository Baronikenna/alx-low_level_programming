#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: Pointer to the string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - Prints the second half of a string.
 *
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index = (length - 1) / 2;
	int i;

	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

