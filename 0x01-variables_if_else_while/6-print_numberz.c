#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * description - Outputs numbers in base 10 from 1 to 9
 *
 * Author - ELKINDMAN
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
                putchar(ch + '0');
	}

	putchar('\n');

	return (0);
}
