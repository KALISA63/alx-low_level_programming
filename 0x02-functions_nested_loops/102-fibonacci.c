#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int count;
	int upto = 50;
	long num1 = 1;
	long num2 = 2;

	for (count = 1; count <= (upto / 2); count++)
	{
		if (count < (upto / 2))
		{
			printf("%li, %li, ", num1, num2);
			num1 = num1 + num2;
			num2 = num2 + num1;
		}
		else if (count == (upto / 2))
		{
			printf("%li, %li", num1, num2);
			num1 = num1 + num2;
			num2 = num2 + num1;
		}
	}
	if (upto % 2 == 1)
	{
		printf("%li", num1);
	}
	printf("\n");
	return (0);
}
