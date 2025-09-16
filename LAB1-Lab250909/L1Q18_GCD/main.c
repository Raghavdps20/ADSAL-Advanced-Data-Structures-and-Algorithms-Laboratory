#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter Num 1: ");
    scanf("%d", &num1);
    printf("Enter Num 2: " );
    scanf("%d", &num2);

    printf("GCD: %d\n", gcd(num1, num2));

    return 0;
}
