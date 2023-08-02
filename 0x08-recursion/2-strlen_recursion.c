#include "main.h"

/**
* _strlen_recursion -  Returns lenght of a string
* @s: String to be passed
*
* Return: int (lenght of a string)
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
