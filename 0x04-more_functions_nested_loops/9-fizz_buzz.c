#include <stdio.h>
/**
 *fizz_buzz - used to print a square using #
 *
 *no imput
 *
 *Return: void
 */
void fizz_buzz(void)
{
int a = 1;
while (a < 101)
{
if (!(a % 3) && !(a % 5))
puts("FizzBuzz ");
else if (!(a % 3))
puts("Fizz ");
else if (!(a % 5))
puts("Buzz");
else
printf("%d ", a);
}
}
