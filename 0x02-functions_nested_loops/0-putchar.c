#include "main.h"

/**
 * main - Prints out _putchar
 * Return:0 if sucessful
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
