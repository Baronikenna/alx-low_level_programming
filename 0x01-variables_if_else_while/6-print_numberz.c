#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	putchar('\n'); /* Prints a new line */

	return (0);
}
