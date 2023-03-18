#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int decimal = 48;
	int alpha = 97;
	/* Declerations */
	/* Statements */
	while (decimal < 58)
	{
		putchar(decimal);
		++decimal;
	}
	while (alpha < 103)
	{
		putchar(alpha);
		++alpha;
	}
	putchar(10);
	return (0);
}
