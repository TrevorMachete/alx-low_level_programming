#include <stdio.h>

/**
 * main - computes and prints the sum of the even-valued terms in the Fibonacci
 * sequence whose values do not exceed 4,000,000
 *
 * Return: 0 if successful
 */
int main(void)
{
long int t1 = 1, t2 = 2, nextTerm = 0, sum = 2;

while (nextTerm <= 4000000)
{
nextTerm = t1 + t2;
if (nextTerm % 2 == 0)
sum += nextTerm;
t1 = t2;
t2 = nextTerm;
}
printf("%ld\n", sum);
return (0);
}
