#include <stdio.h>
#include <stdlib.h>

int countsum(int x[], int l){
    if(l==0){
        return 0;
    }
    return x[l-1] + countsum(x, l-1);

}

int main()
{
    int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int sum = 0;
    int length = sizeof(a)/sizeof(a[0]);

    sum = countsum(a,length);
    printf("Sum recursive = %d",sum);
    return 0;
}
