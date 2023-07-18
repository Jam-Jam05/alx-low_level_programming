#include "main.h"

/**
 * main - Write a function that prints the alphabet in
 *lowercase followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char jamiu;

	for (jamiu = 'a'; jamiu <= 'z'; jamiu++)
		_putchar(jamiu);

	_putchar('\n');
}
