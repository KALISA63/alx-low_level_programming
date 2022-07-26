#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: ponter that stores value
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
