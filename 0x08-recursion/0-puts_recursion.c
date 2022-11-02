#include "main.h"
/**
 * _puts_recursion - Prints a string.
 * @t: The string to be printed.
 */
void _puts_recursion(char *t)
{
	if (*t)
	{
		_putchar(*t);
		_puts_recursion(t + 1);
	}
		_putchar('\n');
}
