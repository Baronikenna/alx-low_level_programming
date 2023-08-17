#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array of integers
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: Index of first matching element, or -1 if not found or on error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

