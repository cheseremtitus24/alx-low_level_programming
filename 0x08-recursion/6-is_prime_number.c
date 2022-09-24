#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion- computes the square root of a number
 * @n: input number
 *
 * Description- Computes the square root of a number recursively using the
 * subtraction of odd numbers till subtraend is zero.
 * Method: Repeated Subtraction of Square Root
 * sourced from : https://cuemath.com/algebra/squares-and-square-roots
 *
 * Return: positive integer else -1
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n <= 0)
		return (0);
	return (!isPrime(2,n));


}

int isPrime(int i,int num){
	if (num == i)
		return (0);
	else
		if(num % i == 0)
			return (1);
		else
		{
			return isPrime(i+1, num);
		}
}
