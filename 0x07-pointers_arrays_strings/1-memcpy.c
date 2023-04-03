#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: input string 
 * @src: input string
 * @n: unsigned input integer
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int index = 0;

    while (index < n)
    {
        *(dest + index) = *(src + index);
        index++;
    }
    return (dest);
}