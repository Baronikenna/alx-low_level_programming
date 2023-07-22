#include "main.h"
/**
 * _isalpha - checks if a character is alphabetic
 * @c: the ASCII value of the character to check
 *
 * Return: 1 if c is an alphabetic character ase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
