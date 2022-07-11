#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 4 except 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
