#include "main.h"

int check_prime(int n, int div);

/**
* is_prime_number - checks if the integer is a prime number
* @n: input
* Return: 1 if n is prime otherwise 0
*/
int is_prime_number(int n)
{
	int div = n / 2;

	if (n <= 1)
		return (0);
	return (check_prime(n, div));
}

/**
 * check_prime - checks if n is prime
 * @div: reference number
 * @n: number to check
 * Return: 1 if n is prime
*/
int check_prime(int n, int div)
{
	if (div <= 1)
		return (1);
	else if (n % div == 0)
		return (0);
	return (check_prime(n, div - 1));
}
