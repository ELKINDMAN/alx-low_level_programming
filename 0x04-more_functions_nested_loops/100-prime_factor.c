#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", factor);

	return (0);
}
