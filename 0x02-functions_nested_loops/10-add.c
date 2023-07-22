#include <stdio.h>
#include "main.h"

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 for successful execution.
 */
int main(void)
{
	int num1, num2, result;

	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
       	result = add(num1, num2);
	printf("Sum: %d\n", result);

	return (0);
}
