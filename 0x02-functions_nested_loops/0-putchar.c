#include "main.h"

/**
 * Main - Output _putchar
 * Return:0 if sucessful
 */
int main(void)
{
	char c = "_putchar";

	while (c)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
