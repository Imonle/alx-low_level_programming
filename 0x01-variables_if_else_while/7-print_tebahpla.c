#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse order
 * Return: Always 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}