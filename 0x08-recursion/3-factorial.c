#include "main.h"

/**
* factorial - Factorial of giving number
* @n: Giving number
*
* Return: int (Always)
*/

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	return (n * factorial(n - 1));
}
