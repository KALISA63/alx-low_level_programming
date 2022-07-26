#include"main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer that stores a string
 * @src: pointer that stores a string
 * @n: integer parameter
 * Return: Return a character
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
