#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet ten times, in lowercase.
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int lines = 0;

	while (lines < 10)
	{
		_putchar(alpha);

		if (alpha == 'z')
		{
			_putchar('\n');
			alpha = 'a';
			lines++;
		}
		else
		{
			alpha++;
		}
	}
}

