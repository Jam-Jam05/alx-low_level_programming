#include <stdio.h>
/**
* main -  program that prints the size of various types
* Return: Always 0 (success)
*/
int main(void)
{
printf("size of a char: %lu byte(s)\n", Sizeof(char));
printf("size of an int: %lu byte(s)\n", Sizeof(int));
printf("size of a long int: %lu byte(s)\n", Sizeof(long int));
printf("size of a long long int: %lu byte(s)\n", Sizeof(long long int));
printf("size of a float: %lu byte(s)", Sizeof(float));
return (0);
