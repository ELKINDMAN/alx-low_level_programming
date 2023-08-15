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

int main()
{
    int ch;

    for (ch = 0; ch <= 9; ch++)
    {

        printf("%d", ch);
    }
    printf("\n");

    return (0);
}

