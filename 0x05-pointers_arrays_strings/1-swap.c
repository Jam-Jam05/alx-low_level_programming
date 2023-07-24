#include "main.h"
/**
*swap_int - function to swap to vars
*
*@a: the inputed var 1
*@b: the inputed var 2
*
*Return: return 1 if it an upper case and 0 otherwise
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
