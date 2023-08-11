#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * isNumeric - Checks if a string is composed of digits only
 * @str: The input string to check
 * Return: true if the string is numeric, false otherwise
 */
bool isNumeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (false);
		}
		str++;
	}
	return (true);
}

/**
 * stringToInt - Converts a string to an integer
 * @str: The input string to convert
 * Return: The converted integer value
 */
int stringToInt(char *str)
{
	int result = 0;

	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 * Return: 0 if successful, 98 if there's an error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	int num1 = stringToInt(argv[1]);
	int num2 = stringToInt(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
