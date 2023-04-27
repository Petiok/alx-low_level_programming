#include "main.h"

/**
 * _isdigit - Check if the character is a digit
 * @c: The number to be checked
 * Return: 1 for a digit character and 0 if otherwise
 *
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

