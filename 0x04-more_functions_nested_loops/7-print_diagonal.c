#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int row, num_lines;

	if (n <= 0)
	{
		_putchar('\');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				or (num_lines = 1; num_lines <= row - 1; num_lines++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
		
