#include"main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointers that stores a string
 * @src: pointers that stores a string
 * @n: bytes from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != 0)
		j++;
	while (src[i] != 0 && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
