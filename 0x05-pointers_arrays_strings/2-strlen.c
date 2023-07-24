/**
*_strlen - function to get the len of a string
*
*@s: the inputed pointer of array
*
*Return: return the length of the array
*/
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != 0)
	{
	a++;
	}
	return (a);
}
