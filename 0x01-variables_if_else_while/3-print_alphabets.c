#include <stdio>

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
	while (l <= 'z')
		putchar(l);
	l++;
	while (u <= 'Z')
		putchar(u);
	u++;
	putchar('\n');
	return (0);
}
