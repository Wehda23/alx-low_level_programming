#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string input
 * @needle: string input
 * Return: pointer to the begging of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
    int index;

    while (*haystack)
    {   
        index = 0;
        
        if (haystack[index] == needle[index])
        {
            while (haystack[index] == needle[index])
            {
                if (needle[index + 1] == '\0')
                    return (haystack);
                
                index++;
            }
        }

        haystack++;
    }

    return ('\0');
}