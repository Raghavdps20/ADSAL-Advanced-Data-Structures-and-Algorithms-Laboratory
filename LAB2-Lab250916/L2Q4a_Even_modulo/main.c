#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[] = {3,4,6,2,1,5,7,8,5,4,3,5};

    int len = sizeof(num)/sizeof(num[0]);

    for(int i = 0; i<len; i++){
        if(num[i] % 2 == 0){
            printf("%d is Even\n", num[i]);
        }
        else{
            printf("%d is Odd\n", num[i]);
        }
    }
    return 0;
}
