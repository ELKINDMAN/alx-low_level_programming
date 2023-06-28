#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor
 *                        of a given number
 * @n: The number
 */
void largest_prime_factor(long int n)
{
	long int i;

	while (n % 2 == 0)
	{
		printf("%ld ", 2);
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			printf("%ld ", i);
			n /= i;
		}
	}

	if (n > 2)
		printf("%ld", n);

	printf("\n");
}

