#include "holberton.h"
/**
 * prime_number_aux - finds prime numbers.
 * @n: number to be used.
 * @i: number to prove the condition.
 * Return: 1 if n is a prime number, otherwise return 0.
 */
int prime_number_aux(int n, int i)
{
	if (i > (n / 2))
		return (1);
	else if (n % i == 0)
		return (0);
	return (prime_number_aux(n, i + 1));
}
/**
 * is_prime_number - finds if a number is prime number or not.
 * @n: number to be used.
 * Return: prime_number_aux if n>1, 0 if n is not prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number_aux(n, 2));
}
