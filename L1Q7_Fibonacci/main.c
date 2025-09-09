#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = a+b;
    int n;
    int i;

    printf("Enter n : ");
    scanf("%d", &n);

    for (i = 0; i<n; i++){
        printf("%d", a);
        if(i<n-1){
            printf(", ");
        }
        a=b;
        b=c;
        c=a+b;
    }

    return 0;
}
