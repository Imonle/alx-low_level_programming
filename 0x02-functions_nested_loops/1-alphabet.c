#include "main.h"

/**
 * main - Prints alphabet in lowercase
 * Return:0 if successful
 */
int main(void)
{
	for (char *c = 'a'; *c <= 'z'; ++c);
	{
		_putchar(*c);
	}
	_putchar('\n');
	return 0;
}
