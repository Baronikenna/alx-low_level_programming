#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to find the last digit of.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
		k = -1 * (n % 10);
	else
		k = n % 10;
	_putchar('0' + k);
	return (k);
}
