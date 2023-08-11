#include <stdio.h>

/**
 * main - prints the alphabet in lowercase in reverse order
 *
 * Return: 0 if successful
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');

return (0);
}
