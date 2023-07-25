#include "main.h"
/**
*_puts - function to print a string
*
*@str: the inputed pointer of string
*/
void _puts(char *str)
{
	int t = 0;

	while (*(str + t) != 0)
	{
	_putchar(*(str + t));
	t++;
	}
	_putchar('\n');
}
