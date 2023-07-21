#include "main.h"
/**
* more_numbers - a function to print numbers for 0 to 14  10 times
*
* no input
*
* Return: it does not return
*/
void more_numbers(void)
{
int b = 0;
	while (b < 10)
	{
	int a = 0;

	while (a <= 14)
	{
	if (a >= 10)
	_putchar(a / 10 + '0');
	_putchar(a % 10 + '0');
	a++;
	}
	_putchar('\n');
	b++;
	}
}
