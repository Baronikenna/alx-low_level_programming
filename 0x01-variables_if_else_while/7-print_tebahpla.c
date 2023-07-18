#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print the alphabet in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n'); /* Print a new line */

	return (0);
}
