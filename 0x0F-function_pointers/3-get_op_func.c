#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    for (int i = 0; ops[i].op; i++)
    {
        if (strcmp(s, ops[i].op) == 0)
        {
            return ops[i].f;
        }
    }

    return NULL;
}
