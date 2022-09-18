#include <stdio.h>

/**
 * main - Prints lowercase and uppercase alphabets
 * Return: Always 0
 */
int main(void)
{
	char l;
	char u;

	l = 'a';
	u = 'A';
	while (l <= 'z'; l++)
		putchar(l);
	while (u <= 'Z'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
