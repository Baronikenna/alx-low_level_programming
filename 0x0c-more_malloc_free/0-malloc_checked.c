#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         Exits with status EXIT_FAILURE if allocation fails.
 */
void *malloc_checked(unsigned int b)
{
       	void *ptr = malloc(b);

	if (ptr == NULL)

	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(98);
	}
	return ptr;
}
/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int *arr = malloc_checked(10 * sizeof(int));

	/* Now you can use the allocated memory in the 'arr' array.*/
	/* Don't forget to free the allocated memory when you're done with it.*/
	free(arr);
	return (0);
}
