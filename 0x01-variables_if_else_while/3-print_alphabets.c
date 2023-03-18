#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower = 97;
	int upper = 65;
	/* Declerations */
	/* Statements */
	while (lower < 123)
	{
		putchar(lower);
		++lower;
	}
	while (upper < 91)
	{
		putchar(upper);
		++upper;
	}
	putchar(10);
	return (0);
}
