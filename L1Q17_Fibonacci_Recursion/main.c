#include <stdio.h>
#include <stdlib.h>

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1) + fib (n-2);

}

int main()
{
    int num;
    int i;
    printf("Enter Num : ");
    scanf("%d", &num);
    for(i=0; i<num; i++){
        printf("%d", fib(i));
        if(i<num-1){
            printf(", ");
        }
    }


    return 0;
}
