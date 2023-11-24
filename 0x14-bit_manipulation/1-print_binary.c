#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to be converted and printed.
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0; /* Flag to ignore leading zeros */

	while (mask > 0)
	{
		if ((n & mask) || flag)
		{
			_putchar((n & mask) ? '1' : '0');
			flag = 1; /* Set the flag after the first non-zero bit */
		}
		mask >>= 1;
	}

	/* If the number is 0, print 0 */
	if (flag == 0)
	_putchar('0');
}
