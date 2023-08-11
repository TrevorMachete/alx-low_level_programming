#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10 starting from 0
 *
 * Return: 0 if successful
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
