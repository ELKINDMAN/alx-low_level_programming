#include <stdio.h>

/**
 * main - entry point of the program
 *
 * description - A program that outputs the alphabets.
 * Author - ELKINDMAN
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
