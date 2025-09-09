#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int b=5;

    printf("Initial value of a = %d, b = %d \n", a,b);

    int temp = a;
    a = b;
    b = temp;

    printf("After Swapping a = %d, b = %d", a,b);

    return 0;
}
