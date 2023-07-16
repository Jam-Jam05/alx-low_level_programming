#include <stdio.h>
/**
 * main - prints all possible combinations of single digit
 * Return: 0 success
 */
int main(void)
{
	char long t = 48;

	while (t <= 57)
	{
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
