#include <stdio.h>
/**
 * main - Alphabeth accept lowercase
 * Return: 0 success
 */
int main(void)
{
	int t = 97;

	while (t < 123)
	{
		if ((t != 101) && (t != 113))
		{
			putchar(t);
		}
		t++;
	}
	putchar('\n');
	return (0);
}
