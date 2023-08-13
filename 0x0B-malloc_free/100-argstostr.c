#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 * Return: A pointer to the concatenated strin
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, k = 0;

	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	concatenated = malloc(total_len * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}
		concatenated[k] = '\n';
		k++;
	}
	concatenated[k] = '\0';
	return (concatenated);
}
