#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the token number : ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("The Token number is Even");
    }
    else{
        printf("The number is Odd");
    }

    return 0;
}
