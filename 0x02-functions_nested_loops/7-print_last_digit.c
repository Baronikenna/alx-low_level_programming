#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Calculate the absolute value of n in case it's negative */
	if (n < 0)
		n = -n;

	/* Calculate the last digit */
	last_digit = n % 10;

	/* Print the last digit */
	_putchar(last_digit + '0');

	/* Return the value of the last digit */
	return (last_digit);
}
