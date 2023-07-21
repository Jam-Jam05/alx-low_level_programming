#include "main.h"
/**
 *print_line - used to print line
 *
 *@a: number of _
 *
 *Return: void
 */
void print_line(int a)
{
	if (a > 0)
	{
	int b = 0;
	while (b < a)
	{
	_putchar('_');
	b++;
	}
	}
	_putchar('\n');
}
