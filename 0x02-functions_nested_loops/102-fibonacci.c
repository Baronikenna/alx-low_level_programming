#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, separated by commas.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long long int num1 = 1, num2 = 2, next, count;

	printf("%11lld, %11lld", num1, num2);
	for (count = 3; count <= 50; count++)
	{
		next = num1 + num2;
		printf(", %11lld", next);
		num1 = num2;
		num2 = next;
	}
	printf("\n");
	return (0);
}
