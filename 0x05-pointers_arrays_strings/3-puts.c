#include "main.h"

/**
 * _puts - A function that prints a string followed by new line
 * @str: A given string
 */

void _puts(char *str)
{
	int h;

	for (h = 0; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
