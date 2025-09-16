#include <stdio.h>
#include <stdlib.h>

int fact(num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num * fact(num - 1);

}

int main()
{
    int num;
    printf("Enter num : ");
    scanf("%d", &num);


    printf("Factorial of %d is %d",num, fact(num));
    return 0;
}
