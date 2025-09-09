#include <stdio.h>
#include <stdlib.h>

int fact(n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int num;
    printf("Enter num : ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, fact(num));
    return 0;
}
