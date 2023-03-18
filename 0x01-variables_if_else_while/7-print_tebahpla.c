#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int decimal = 122;
	/* Declerations */
	/* Statements */
	while (decimal > 96)
	{
		putchar(decimal);
		--decimal;
	}
	putchar(10);
	return (0);
}
