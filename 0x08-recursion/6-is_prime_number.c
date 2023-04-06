#include "main.h"


/**
 * check_prime - is a function that divides number and checks prime
 * @number: Input integer
 * @divisable_number: input integer decrementing
 * Return: return 1 if the number is a prime number and 0 if not.
 */

int check_prime(int number, int divisable_number)
{

	if (divisable_number == 1)
		return (1);

	if (number % divisable_number == 0)
		return (0);

	return (check_prime(number, divisable_number - 1));
}

/**
 * int is_prime_number - function that checks if input is prime number
 *                       or not.
 * @n: Integer input
 * Return: Returns 1 if the integer is a prime number, otherwise return 0
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (check_prime(n, n - 1));
}
