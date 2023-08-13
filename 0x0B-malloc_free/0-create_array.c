#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array -  it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character used for initialization.
 * Return: A pointL if size is 0 or allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
