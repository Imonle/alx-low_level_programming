#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lowercase
 * Return: Always 0
 */
int main(void)
{
	int d;
	char l;

	d = 0;
	while (d <= 9)

	putchar(d);
	d++;

	l = 'a';
	while (l <= 'f')

	putchar(l);
	l++;

	putchar('\n');
	return (0);
}
