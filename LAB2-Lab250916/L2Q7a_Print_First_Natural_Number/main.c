#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
