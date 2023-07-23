#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, separated by commas.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num1 = 1, num2 = 2, next, count;

	printf("%d, %d", num1, num2);
	for (count = 3; count <= 50; count++)
	{
		next = num1 + num2;
		printf(", %d", next);
		num1 = num2;
		num2 = next;
	}
	printf("\n");
	return (0);
}
