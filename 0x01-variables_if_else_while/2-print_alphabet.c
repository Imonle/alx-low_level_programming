#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints lowercase alphabets
 * Return: Always 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
