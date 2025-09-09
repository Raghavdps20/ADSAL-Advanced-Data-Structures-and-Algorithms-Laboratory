#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int count = 0;
    int digit;

    printf("Enter a number : ");
    scanf("%d", &num);

    while(num>0){
        count++;
        num = num/10;
    }

    printf("Count is %d", count);


    return 0;
}
