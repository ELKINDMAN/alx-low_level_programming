#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * description - outputs the alphabets in uppercase
 *
 * Author - ELKINDMAN
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
for  (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');

return (0);
}
