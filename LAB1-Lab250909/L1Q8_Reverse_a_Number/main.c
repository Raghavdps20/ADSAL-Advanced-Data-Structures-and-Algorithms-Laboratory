#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int sum = 0;
    int digit;
    printf("Enter a number : ");
    scanf("%d", &num);

    while(num>0){
        digit = num%10;
        sum = sum * 10 + digit;
        num = num/10;
    }

    printf("Reverse of the number is %d", sum);


    return 0;
}
