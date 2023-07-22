#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			/* Print a space and leading zero if needed */
			if (j == 0)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(' ');

				/* Print tens digit of the product */
				if (k >= 10)
					_putchar((k / 10) + '0');
				else
					_putchar(' ');

				/* Print ones digit of the product */
				_putchar((k % 10) + '0');
			}

			/* Print comma and space for columns except the last one */
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		/* Move to the next row */
		_putchar('\n');
	}
}
