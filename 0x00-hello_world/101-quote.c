#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char ch[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1,ch,59);
	return (1);
}
