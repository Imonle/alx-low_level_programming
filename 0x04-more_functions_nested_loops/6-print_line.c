#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: Input number of times to print '___'
 * Return: a straight line
 */

void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
