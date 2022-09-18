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
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if (i != j && i != k && j != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (k == '9' && j == '8' && i == '7')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
