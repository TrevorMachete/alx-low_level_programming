#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9
 *
 * Return: 0 if successful
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
putchar(i + '0');
putchar('\n');

return (0);
}
