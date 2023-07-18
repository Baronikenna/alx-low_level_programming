#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	/* Print numbers from 0 to 9 */
	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	/* Print lowercase letters a to f */
	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n'); /* Print a new line */

	return (0);
}
