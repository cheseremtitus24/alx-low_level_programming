#include "main.h"
/**
 * is_prime_number- checks if a number is prime
 * @n: input number
 *
 * Description- Checks that a number is prime and returns 1 else 0
 *
 * Return: positive integer else 0
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n <= 0)
		return (0);
	return (!isPrime(2, n));


}

/**
 * isPrime- checks if a number is prime
 * @i: seed number
 * @num: input number
 *
 * Description- Checks recursively that a number is prime and returns 1 else 0
 *
 * Return: 1 else 0
 */
int isPrime(int i, int num)
{
	if (num == i)
		return (0);
	if (num % i == 0)
		return (1);
	return (isPrime(i + 1, num));
}
