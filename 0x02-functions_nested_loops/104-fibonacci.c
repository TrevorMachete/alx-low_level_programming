#include <stdio.h>

int main(void)
{
    int i;
    unsigned long f1 = 0, f2 = 1, next;

    for (i = 1; i <= 98; i++)
    {
        next = f1 + f2;
        printf("%lu", next);
        if (i != 98)
            printf(", ");
        f1 = f2;
        f2 = next;
    }
    printf("\n");
    return (0);
}
