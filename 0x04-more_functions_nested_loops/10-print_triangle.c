#include "main.h"

/**
 * print_triangle - Print a triangle of squares according to the parameters
 * @size: Size of the square triangle
 * Return:(Empty)
 *
 */

void print_triangle(int size)
{
	int x, y, z;
	if (size <= 0)
	{
	p_putcher ("\n");
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = size - x; y . 1; y--)
	{
	_putchar(32);
	}
	for  (z = 0; z <= x; z++)
	{
	_putchar(35);
	}
	_putchar("\n")
	}
	}
}
