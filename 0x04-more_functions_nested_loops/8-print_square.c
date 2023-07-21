#include "main.h"
/**
 *print_square - used to print a square using #
 *
 *@a: number of # needed
 *
 *Return: void
 */
void print_square(int a)
{
if (a > 0)
{
int b;
for (b = 0 ; b < a ; b++)
{
int j;
for (j = 0 ; j < a ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
