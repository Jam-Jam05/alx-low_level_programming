#include "main.h"
/**
 *print_diagonal - used to print a diagonal using \
 *
 *@a: number of \ needed
 *
 *Return: void
 */
void print_diagonal(int a)
{
if (a > 0)
{
int b;
for (b = 0 ; b < a ; b++)
{
int j;
for (j = 0 ; j < b ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
