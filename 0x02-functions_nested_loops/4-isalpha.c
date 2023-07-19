#include "main.h"
/**
* _isalpha - finds alphabet character
* @c: Character to be looked into
* Return: 1 for alphabetic character or 0 for others
*/
int _isalpha(int c)
{

	while ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
