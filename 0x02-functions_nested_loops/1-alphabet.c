#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 * Return:0 if successful
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z');
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return 0;
}
