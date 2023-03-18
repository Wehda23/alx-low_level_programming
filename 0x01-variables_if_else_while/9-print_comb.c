#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int decimal = 48;
	int sign = 44;
	/* Declerations */
	/* Statements */
	while (decimal < 58)
	{
		putchar(decimal);
		if (decimal == 57)
			sign = 36;
		putchar(sign);
		putchar(32);
		++decimal;
	}
	putchar(10);
	return (0);
}
