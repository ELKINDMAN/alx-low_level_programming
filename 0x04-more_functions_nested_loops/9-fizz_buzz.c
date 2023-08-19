#include <stdio.h>

/**
* main - entry point for the code.
*
* Description: The fizzBuzz program
* Author: Kindness Mbaekwe
*
* Return: Always 0 (success)
*/
int main(void)
{
	int hund;

	for (hund = 1; hund <= 100; hund++)
	{
		if (hund % 3 == 0 && hund % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (hund % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (hund % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", hund);
		}
	}
	printf("\n");
	return (0);
}
