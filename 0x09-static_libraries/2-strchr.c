#include"main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to a character
 * @c: integer parameter
 *
 * Return: a character or a string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
