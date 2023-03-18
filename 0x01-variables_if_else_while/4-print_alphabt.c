#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int decimal = 97;
	/* Declerations */
	/* Statements */
	while (decimal < 123)
	{
	if (decimal != 101 && decimal != 113)
		putchar(decimal);
	++decimal;
	}
	putchar(10);
	return (0);
}
