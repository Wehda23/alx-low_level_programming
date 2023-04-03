#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string string input
 * @b: character input
 * @n: is an unsigned integer input
 * Return: pointer string
 */

char * _memset(char *s, char b, unsigned int n)
{

    unsigned int index = 0;

    while (index < n)
    {
        *(s + index) = b;
        index++;
    }
    return (s);
}