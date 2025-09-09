#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50] = "How many vowels are there";
    int count = 0;
    int i = 0;

    while(s[i] != '\0'){
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
        i++;
    }
    printf(s);
    printf("\nTotal number of vowels in the above statement is = %d", count);
    return 0;
}
