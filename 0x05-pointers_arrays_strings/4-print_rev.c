#include "main.h"
/**
*print_rev - function to print a reversed string
*
*@s: the inputed pointer of stirng
*/
void print_rev(char *s)
{
	int b = 0;
	int c = 0;
	int a = _strlen(s);
	char d[a];

	while (b < a)
	{
	d[b] = *(s + (a - b - 1));
	}
	while (c < a)
	{
	*(s + c) = d[c];
	}
}
