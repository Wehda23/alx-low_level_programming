#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int list[50];

	list[0] = 1;
	list[1] = 2;
	printf("%ld, %ld, ", list[0], list[1]);

	for (i = 2; i < 50; i++)
	{
		list[i] = list[i - 1] + list[i - 2];
		if (i == 49)
			printf("%ld\n", list[i]);
		else
			printf("%ld, ", list[i]);
	}

	return (0);
}
