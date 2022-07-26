#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to a character
 * @src: pointer to a character
 * @n: integer parameter
 *
 * Return: characyer or string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
