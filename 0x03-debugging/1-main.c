#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
/*
while (n > 0)
{
if (n > 0 && n <= 10)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
else if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
else if (n == 0)
printf("Last digit of %d is %d and is 0\n", n, n % 10);
n /= 10;
}
*/
return (0);
}
