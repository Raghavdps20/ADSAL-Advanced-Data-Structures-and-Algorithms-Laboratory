#include <stdio.h>
#include <stdlib.h>

int isPalindromeMath(int num) {
    if (num < 0) return 0;

    int original = num;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}


int main()
{
    int id;
    printf("Enter ID number: ");
    scanf("%d", &id);

    if (isPalindromeMath(id))
        printf("%d is a palindrome.\n", id);
    else
        printf("%d is not a palindrome.\n", id);
    return 0;
}
