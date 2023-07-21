#include "main.h"
/**
*_isupper - function to check a letter is it uppercase or not
*
*@c: the inputed letter
*
*Return: return 1 if it an upper case and 0 otherwise
*/
int _isupper(int c)
{
	if (((int)c <= 90) && ((int)c >= 65))
	return (1);
		else
		return (0);
}
