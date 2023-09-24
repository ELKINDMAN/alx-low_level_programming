#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1;
    int num2;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    op_func = get_op_func(argv[2]);
    if (op_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", op_func(num1, num2));

    return 0;
}
