#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);

    int c = 5, d = 10;

    printf("Before swap: c = %d, d = %d\n", c, d);

    c = c ^ d;
    d = c ^ d;
    c = c ^ d;

    printf("After swap: c = %d, d = %d\n", c, d);

    return 0;
}
