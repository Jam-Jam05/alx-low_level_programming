#include <stdio.h>
/**
 * main -  program that prints the lowercase alphabet in reverse
 * Return: 0 success
 */
int main(void)
{
	int g = 122;

	while (g >= 97)
	{
		putchar(g);
		g--;
	}
	putchar('\n');
	return (0);
}
