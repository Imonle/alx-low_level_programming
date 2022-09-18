#include <stdio.h>

/**
 * main - Prints all possible combination of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	        if (d != '9')
		{
			putchar(',');
		        putchar(' ');
		}
	}
        putchar('\n');

	return (0);
}
