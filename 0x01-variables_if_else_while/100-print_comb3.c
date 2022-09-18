#include <stdio.h>

/**
 * main - Prints all possible different combination of two digit
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	i = '0';
	j = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (j == '9' && i == '8')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
