#include <stdio.h>

/**
 * main - the main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, j, k, l;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}

		else
		{
			printf("%d\n", j);
		}

		l = j + k;
		j = k;
		k = l;
	}

	return (0);
}
