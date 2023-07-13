#include <stdio.h>
/**
 * main -  program that prints the size of various types
 * Return: Always 0 (success)
 */
int main(void)
{      
	char a;
	int b
	long int c;
	long long int d
	float e;
printf("size of a char: %d byte(s)\n", (unsigned long) sizeof(a));
printf("size of a int: %d byte(s)\n", (unsigned long) sizeof(b));
printf("size of a long int: %d byte(s)\n", (unsigned long) sizeof(c));
printf("size of a long long int: %d\ byte(s)\n", (unsigned long) sizeof(d));
printf("size of a float: %d byte(s)\n",(unsigned long) sizeof(e));
return(0);
}
