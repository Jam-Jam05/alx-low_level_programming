#include <stdio.h>
/**
 * main -  program that prints all the numbers of base sixteen in lowercase
 * Return: 0 Always
*/
int main(void)
{
	int j = 48;
	char k = 97;

	j = 'a';
	k = 0;
	while (j <= 57)
	{
		putchar(j);
			j++;
}
	while (k <= 102)
{
	putchar(k);
	k++;
}
putchar('\n');
return (0);
}

