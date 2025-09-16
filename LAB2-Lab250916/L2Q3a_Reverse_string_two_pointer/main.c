#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[] = "My name is Agent Max Matrix";
    int left, right;
    char temp;

    int len = 0;

    while(s[len] != '\0')
    {
        len++;
    }

    left = 0;
    right = len - 1;

    while(left<right)
    {
        temp = s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }

    printf("%s",s);

    return 0;
}
