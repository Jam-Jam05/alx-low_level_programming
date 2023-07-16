#include <stdio.h>
/**
 * main - prints all possible combinations of single digit
 * Return: 0 success
 */
int main(void)
{
	int t = 48;

	while (t <= 57)
	{
		putchar(t);
		if (t != 57)
		{
			putchar(',');
			putchar(' ');
		}
		t++;
	}
	putchar('\n');
	return (0);
}
