#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    int length = sizeof(a)/sizeof(a[0]);
    int i;

    for(i = 0; i < length; i++){
        sum += a[i];
    }
    printf("The Sum of all the elements : %d", sum);
    return 0;
}
