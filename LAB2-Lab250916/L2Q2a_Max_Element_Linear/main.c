#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp[] = {34,25,34,43,23,34,32,36,37,38};
    int len = sizeof(temp)/sizeof(temp[0]);
    int max = temp[0];
    int i;

    for(i = 0; i<len; i++){
        if (max <= temp[i]){
            max = temp[i];
        }
    }
    printf("The max element = %d", max);
    return 0;
}
