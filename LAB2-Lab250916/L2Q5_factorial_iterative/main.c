#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter num : ");
    scanf("%d", &num);
    int fact = 1;

    for(int i=2; i<=num; i++){
        fact = fact * i;
    }

    printf("Factorial of %d is %d",num,fact);
    return 0;
}
