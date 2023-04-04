#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string input
 * @s: string input
 * Return: Number of bytes in the initial segement of s
 */

unsigned int _strspn(char *s, char *accept)
{
    int index, subIndex;
    unsigned int bytes;

    while (*(s + index) != '\0')
    {
        while (*(accept + subIndex)  != '\0')
        {
            if (*(s + index) == *(accept + subIndex))
            {
                bytes++;
                break;
            }
            else if (accept[subIndex + 1] == '\0')
                return (bytes);

            subIndex++;
        }
        subIndex = 0;
        index++;
    }



    return (bytes);
}