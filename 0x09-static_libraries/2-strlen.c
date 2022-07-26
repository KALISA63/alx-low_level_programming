#include "main.h"
/**
 * _strlen - returns the lengh of a string
 * @s: pointer that stores value
 *
 * Return: an integer
 */
int _strlen(char *s)
{
	int num_char = 0;

	while (*s != '\0')
	{
		num_char++;
		s++;
	}
	return (num_char);
}
