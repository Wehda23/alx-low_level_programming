#include "main.h"

/**
 * _strpbrk - Locates the first occurance in the string s of any of the bytes in 
 *            string accept
 * @s: string input
 * @accept: string input
 * Return: pointer to the byte in s that matches one of the bytes in accept or Null
 */

char *_strpbrk(char *s, char *accept)
{

    int index, mainString;

    while (*(s + index) != '\0')
    {
        while (*(accept + mainString) != '\0')
        {
            if (*(accept + mainString) == *(s + index))
                return (s + index);

            mainString++;
        }
        mainString = 0;
        index++;
    }

    return ('\0');
}