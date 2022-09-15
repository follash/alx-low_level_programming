#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 * @n: numbers of lines
 * Return: void
 */

void print_line(int n)
{
	int num-lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
