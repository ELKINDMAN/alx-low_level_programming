#include "function_pointers.h"

/**
 * print_name - custom name printing function
 * @name: first parameter.
 * @f: second parameter.
 *
 * Description: Write a function that prints a name using two parameters.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
