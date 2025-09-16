#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindromeString(int num) {
    char str[100];
    sprintf(str, "%d", num);
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i])
            return 0;
    }
    return 1;
}



int main()
{
    int id;
    printf("Enter ID number: ");
    scanf("%d", &id);

    if (isPalindromeString(id))
        printf("%d is a palindrome.\n", id);
    else
        printf("%d is not a palindrome.\n", id);

    return 0;
}
