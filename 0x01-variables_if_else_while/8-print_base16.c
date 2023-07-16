#include <stdio.h>
/**
 * main -  program that prints all the numbers of base sixteen in lowercase
 * Return: 0 Always
*/
int main(void)
{
	int j = 48;
	char k;

	while (j <= 57)
	{
		putchar(j);
		j++;
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}

