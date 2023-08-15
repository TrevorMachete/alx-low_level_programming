#include <stdio.h>

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
