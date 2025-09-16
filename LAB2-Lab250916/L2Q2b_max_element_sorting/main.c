#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {32,45,43,36,41,37,38,30,23,21};
    int len = sizeof(a)/sizeof(a[0]);
    int i,j,temp;

    for(i=0; i<len-1;i++){
        for(j=0; j<len-i-1; j++){
            if(a[j] > a [j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Last element = %d", a[len-1]);
    return 0;
}
