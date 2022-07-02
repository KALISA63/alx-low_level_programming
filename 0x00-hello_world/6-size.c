#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int I;
	long long  int II;
	float d;
	char c;

	printf("Size of a char: %lu bytes(s)\n", sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(I));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(II));
	printf("Size of a float: %lu bytes(s)\n", sizeof(d));
	return (0);
}
