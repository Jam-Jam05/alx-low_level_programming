#include "main.h"

/**
* print_sign - print all sign of numbers
* @n: The number to be checked
* Return: 1 for the positve digit, -1 for negative digits or zero for others
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (10);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
