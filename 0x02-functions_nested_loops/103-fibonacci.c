#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int list[50], sum = 2;

	list[0] = 1;
	list[1] = 2;

	for (i = 2; i < 50; i++)
	{
		list[i] = list[i - 1] + list[i - 2];
		if ((list[i] % 2 == 0) && list[i] < 4000000)
			sum += list[i];
	}
	printf("%ld\n", sum);

	return (0);
}
