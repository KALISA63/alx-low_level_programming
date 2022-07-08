#include <stdio.h>
/**
 * main - print sum of even fibonacco sequence up to 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	int add_even_num = 0;
	int x, y;
	int sum = 1;

	x = 1;
	y = 1;
	while (y < 4000000)
	{
		sum = x + y;
		x = y;
		y = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
		{
			add_even_num = add_even_num + sum;
		}
	}
	printf("%d\n", add_even_num);
	return (0);
}
