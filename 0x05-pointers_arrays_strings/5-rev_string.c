#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 *
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	if (s == NULL)
	return;
	/* Find the end of the string */
	while (*end)
		end++;
	end--;
	/* Swap characters from start to end */
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
