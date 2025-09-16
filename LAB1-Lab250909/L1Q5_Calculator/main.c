#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char c;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);


    while(1){
        printf("Enter the Operator + , - , * , / :");
        scanf(" %c", &c);

        switch (c){
        case '+':
            printf("Sum = %d \n", a+b);
            break;
        case '-':
            printf("Difference = %d \n", a-b);
            break;
        case '*':
            printf("Product = %d \n", a*b);
            break;
        case '/':
            printf("a/b = %d \n", a/b);
            break;
        case 'e':
            return 0;;
        default:
            printf("Wrong input \n");
            break;
        }
    }
    return 0;
}
