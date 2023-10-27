#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: int
 * @othrn: int
 * check_prime - checks if the input integer is a prime number
 * Return: 1 if the input number is prime, 0 otherwise
*/
int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can devide it
 * @n: int
 * @othrn: int
 * Return: int
*/

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
