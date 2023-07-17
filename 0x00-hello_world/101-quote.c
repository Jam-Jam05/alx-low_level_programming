#include  <unistd.h>

/**
* main - Write a C program that prints aline to the standard error
* Return: 1 success
*/
int main(void)
{
	char errorMessage[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";

	write(2, &errorMessage, sizeof(errorMessage) - 1);
	return (1);
}
