#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 if successful
 */
int main(void)
{
long int i, t1 = 1, t2 = 2, nextTerm;

printf("%ld, %ld", t1, t2);
for (i = 3; i <= 50; ++i)
{
nextTerm = t1 + t2;
printf(", %ld", nextTerm);
t1 = t2;
t2 = nextTerm;
}
printf("\n");
return (0);
}
