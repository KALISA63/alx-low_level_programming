#include "main.h"

/**
 * _isupper -> this a function to check upper case alphas
 * @c: an integer parmer
 * Return: something but success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);

	return (c >= 65 && c <= 90);
	return (c >= 'A' && c <= 'Z');
}

