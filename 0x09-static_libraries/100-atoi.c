#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: Pointer that stores value
 *
 * Return: a string.
 */
int _atoi(char *s)
{
	short test;
	int i, diff, result;

	i = 0;
	diff = 0;
	result = 0;
	test = 0;
	diff = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			diff *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			test = 1;
		}
		else if (test == 1)
			break;
		i++;
	}
	result *= diff;
	return (result);
}
