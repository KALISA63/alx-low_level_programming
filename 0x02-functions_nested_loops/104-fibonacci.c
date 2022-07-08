#include <stdio.h>
/**
 * main - print first 98 fibonacci number without using long long, malloc
 * pointers, array/tables or structures
 * Return: 0
 */
int main(void)
{
	int count, ovr_flow;
	unsigned long x = 1;
	unsigned long y = 1;
	unsigned long sum = 0;
	long x_first, x_last, y_first, y_last, sum_first, sum_last;

	printf("1");

	for (count = 2; count < 93; count++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf(", %lu", sum);
	}
	x_first = x / 1000000000;
	x_last = x % 1000000000;
	y_first = y / 1000000000;
	y_last = y % 1000000000;

	for (; count < 99; count++)
	{
		ovr_flow = (x_last + y_last) / 1000000000;
		sum_last = (x_last + y_last) - (1000000000 * ovr_flow);
		sum_first = (x_first + y_first) + ovr_flow;

		printf(", %lu%lu", sum_first, sum_last);

		x_first = y_first;
		x_last = y_last;
		y_first = sum_first;
		y_last = sum_last;
	}
	printf("\n");
	return (0);
}
