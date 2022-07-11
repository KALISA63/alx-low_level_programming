#include <stdio.h>

/**
* main - Entry point.
* Return: Always 0.
*/

int main(void)

{
long number, i;
number = 612852475143;
for (i = 2; i < number; i++)
{
while (number % i == 0)
number = number / i;
}
printf("%lu\n", number);
return (0);
}
