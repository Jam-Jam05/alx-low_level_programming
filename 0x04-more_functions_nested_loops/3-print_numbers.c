#include "main.h"
/**
 *print_numbers - a function to print numbers for 0 to 9
 *
 *no input
 *
 *Return: it does not return
 */
void print_numbers(void)
{
int a = 0;
	while (a <= 9)
	{
	_putchar(a + '0');
	a++;
	}
	_putchar('\n');
}
