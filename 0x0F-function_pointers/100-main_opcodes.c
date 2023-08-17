#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes of a given memory region
 * @start: Pointer to the start of the memory region
 * @n: Number of bytes to print
 */
void print_opcodes(unsigned char *start, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
	printf("%.2x", start[i]);
	if (i < n - 1)
		printf(" ");
	}
	printf("\n");
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 if successful, 1 if incorrect number of arguments,
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
	printf("Error\n");
	return (2);
	}
	unsigned char *main_ptr = (unsigned char *)main;

	print_opcodes(main_ptr, num_bytes);
	return (0);
}

