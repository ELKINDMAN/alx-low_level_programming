#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * description - Outputs the alphabets except from letter 'e' and 'q'
 *
 * Author - ELKINDMAN
 *
 * Ruturn: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
		{
			printf("%c", ch);
		}
	printf("\n");

	return (0);
}
