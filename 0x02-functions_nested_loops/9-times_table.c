#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first column (0) */

		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			result = row * column;

			if (result < 10)
				_putchar(' '); /* Add extra space for single-digit numbers */

			_putchar(result / 10 + '0'); /* Print tens digit */
			_putchar(result % 10 + '0'); /* Print ones digit */
		}

		_putchar('\n');
	}
}
