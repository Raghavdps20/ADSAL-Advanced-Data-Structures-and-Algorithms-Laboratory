#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i*i<num; i++){
        if(num%i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime){
        printf("Is is a prime number");
    }
    else{
        printf("Not a Prime Number");
    }
    return 0;
}
