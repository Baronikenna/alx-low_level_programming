#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Returns (words), or NULL if str is NULL or empty.
 */
char **strtow(char *str)
{
	char **words;

	int i, j, k, count, word_len;

	int word_started = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	word_len = 0;
	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!word_started)
			{
				word_started = 1;
				word_len = 1;
			}
			else
				word_len++;
		}
		else
		{
			if (word_started)
			{
				words[k] = malloc((word_len + 1) * sizeof(char));
				if (words[k] == NULL)
				{
					for (j = 0; j < k; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				word_started = 0;
				word_len = 0;
				k++;
			}
		}
	}

	if (word_started)
	{
		words[k] = malloc((word_len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		k++;
	}

	words[k] = NULL;

	word_started = 0;
	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!word_started)
			{
				word_started = 1;
				j = 0;
			}
			words[k][j] = str[i];
			j++;
		}
		else
		{
			if (word_started)
			{
				words[k][j] = '\0';
				word_started = 0;
				k++;
			}
		}
	}

	if (word_started)
	{
		words[k][j] = '\0';
		k++;
	}

	return (words);
}

