#include "main.h"

/**
* print_alphabet_x10 - write alphabet ten times
* Return: void
*/

void print_alphabet_x10(void)
{
	char ght;
	int j;

	j = 0;
	while (j < 10)
	{
	for (ght = 'a'; ght <= 'z'; ght++)
	{
	_putchar(ght);
	}
	_putchar('\n');
	j++;
}
}
