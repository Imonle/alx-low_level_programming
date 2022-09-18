#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digit
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	i = '0';
	j = '0';
	k = '0';
	while (i <= '9')
	{
		j = '0';
		k = '2';
		while (j <= '9')
		{
			if (i != j && j < i && i < k)
			{
				putchar(j);
				putchar(i);
				putchar(k);
				if (k == '9' && i == '8' && j == '7')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
		k++;
	}
	putchar('\n');
	return (0);
}
