#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int fact = 1;
    int i;
    printf("Enter a number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        fact = fact * i;
    }

    printf("Factorial of %d is %d", num, fact);

    return 0;
}
