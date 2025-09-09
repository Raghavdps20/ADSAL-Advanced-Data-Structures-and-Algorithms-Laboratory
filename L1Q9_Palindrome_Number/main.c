#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int sum = 0;
    int digit;
    int original;
    printf("Enter a number : ");
    scanf("%d", &num);

    original = num;

    while(num>0){
        digit = num%10;
        sum = sum * 10 + digit;
        num = num/10;
    }


    if(original == sum){
        printf("It is a Palindrome Number");
    }
    else{
        printf("Not a Palindrome Number");
    }


    return 0;
}
