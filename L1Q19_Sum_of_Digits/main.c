#include <stdio.h>
#include <stdlib.h>

int sumofnum(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sumofnum(n/10);
}
int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);

    printf("Sum of Digits = %d", sumofnum(num));


    return 0;
}
