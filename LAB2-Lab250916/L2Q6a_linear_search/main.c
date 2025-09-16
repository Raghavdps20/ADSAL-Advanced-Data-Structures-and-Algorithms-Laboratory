#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {9,8,1,2,7,6,4,5,10,3};
    int key = 5;

    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d", i);
            break;
        }
    }
    if(i == n){
        printf("Element not Found");
    }


    return 0;
}
