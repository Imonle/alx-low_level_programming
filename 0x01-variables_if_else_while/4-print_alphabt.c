#include <stdio.h>

/**
 * main - Prints lowercase alphabets except q, e
 * Return: Always 0
 */
int main(void)
{
	char l, e, q;

	for (l = 'a'; l <= 'z'; l++)
		if (l != 'e' && l != 'q')
			putchar(l);
	putchar('\n');
	return (0);
}
