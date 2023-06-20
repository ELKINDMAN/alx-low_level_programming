#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	char m = 'A';

	for (; n <= 'z'; n++)
	{
		putchar(n);
	}

	for (; m <= 'Z'; m++)
	{
		putchar(m);
	}

	putchar('\n');

	return (0);
}

