#include "main.h"

/**
 * get_bit - Function that returns the bit at specified index
 * @n: The value to turn to binary
 * @index: The index at which we return the value of the bit
 * Return: Return the bit at which the index is.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    char s[1024], reversed_s[1024];
    int i = 0, number = n, modulus = 0, index_ = 0, j = 0, r = 0;

    if (number == 0)
    {
        return (0);
    }

    if (index >= sizeof(n) * 8)
        return (-1);

    for (index_ = 0; number > 0; index_++)
    {
        modulus = number % 2;
        number /= 2;
        if (modulus == 1)
            s[index_] = '1';
        else
            s[index_] = '0';

        i = index_;
    }

    s[i] = '\0';

    for (j = i; j >= 0; j--)
    {
        reversed_s[r] = s[j];
        r++;
    }
    reversed_s[r] = '\0';
    
    return (reversed_s[index] - '0');
}