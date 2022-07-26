#include "main.h"
/**
 * _islower -> checks lower case character
 *@c: The character to print
 * Return: 1 in case of a lower case, and 0 otherwise
 */

int _islower(int c)
{
	char i;
	int check = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			check = 1;
		}
	}
	return (check);
}
