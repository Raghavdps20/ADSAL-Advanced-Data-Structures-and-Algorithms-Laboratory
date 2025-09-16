#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8] = {1,3,43,12,54,89,56,79};
    int max = a[0];
    int i;
    int size = sizeof(a)/sizeof(a[0]);

    for(i=0;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    printf("Max element = %d", max);
    return 0;
}
