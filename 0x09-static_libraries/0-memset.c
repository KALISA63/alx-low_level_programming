#include"main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a character
 * @b: character parameter
 * @n: character integer
 *
 * Return: character or strings
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
