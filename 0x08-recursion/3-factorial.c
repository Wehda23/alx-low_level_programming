#include "main.h"

/**
 * factorial - function that returns a factorial of a number.
 * @n: Interger input
 * Return: integer factorial of the given input number.
 */


int factorial(int n)
{
    
    
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else if (n < 0)
        return -1;
    else
        return 1;
}