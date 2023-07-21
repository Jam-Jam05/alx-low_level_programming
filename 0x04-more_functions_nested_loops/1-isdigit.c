#include "main.h"
/**
*_isdigit - function to check a input is a digit or not
*
*@c: the inputed digit
*
*Return: return 1 if it a digit and 0 otherwise
*/
int _isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
	return (1);
	else
	return (0);
}
