#include "main.h"
/**
* puts2 - function that prints every other character of a string
* @str: str
*/

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		if (str[a + 1] == '\0')
			break;
		a += 2;
	}
	_putchar('\n');
}
