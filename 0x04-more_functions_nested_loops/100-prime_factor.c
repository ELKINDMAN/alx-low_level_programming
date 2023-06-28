#include "main.h"
#include <stdio.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor
 *                       of a given number
 * @n: The number
 */
void largest_prime_factor(long int n)
{
	long int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}

	printf("%ld\n", i);
}

