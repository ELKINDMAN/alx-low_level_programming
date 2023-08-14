#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point of the program
 *
 * description - This program will assign a random number to the variable n each time it is executed. 
 * author - ELKINDMAN
 *
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("The number is: %d",n);

	if (n > 0) {
		printf("The number is positive");
	} else if (n == 0) {
		printf("The number is zero");
	} else {
		printf("The number is negative");
			
	return (0);
}
