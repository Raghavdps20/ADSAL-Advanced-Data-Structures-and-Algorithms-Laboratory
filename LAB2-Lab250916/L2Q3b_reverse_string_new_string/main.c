#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[] = "My name is Agent Max Matrix";
    char rev[100];

    int len = 0;

    while(s[len] != '\0'){
        len++;
    }



    int i =0;
    while(s[i] != '\0'){
        rev[i] = s[len-i-1];
        i++;

    }
    rev[len] = '\0';

    printf("%s",rev);

    return 0;
}
