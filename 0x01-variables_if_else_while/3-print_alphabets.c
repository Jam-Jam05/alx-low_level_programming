#include <stdio.h>
/**
 * main - Lowercase and Uppercase
 * Return: 0 success
 */
int main(void)
{
	int f  = 97;
	int j  = 65;

	while (f < 123)
	{
		putchar(f);
		f++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
