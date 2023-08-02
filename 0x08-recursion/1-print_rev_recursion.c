#include "main.h"

/**
* _print_rev_recursion - Print a string in reverse
* @s: Stirng to be printed
*
* Returned: 0 Always
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
