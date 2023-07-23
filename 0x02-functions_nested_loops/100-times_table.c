#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of the times table to print.
 *
 * Description: This function prints the n times table, starting with 0,
 * up to n times n. If n is greater than 15 or less than 0, ZZZ anything.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;


	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				printf("%d", result);
			else
				printf(", %3d", result);
		}

		printf("\n");
	}
}