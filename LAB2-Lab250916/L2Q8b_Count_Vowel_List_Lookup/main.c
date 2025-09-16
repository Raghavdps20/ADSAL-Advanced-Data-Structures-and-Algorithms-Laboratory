#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000] = "How many vowels are there in this string";
    int vowelTable[256] = {0};

    vowelTable['a'] = 1;
    vowelTable['e'] = 1;
    vowelTable['i'] = 1;
    vowelTable['o'] = 1;
    vowelTable['u'] = 1;
    vowelTable['A'] = 1;
    vowelTable['E'] = 1;
    vowelTable['I'] = 1;
    vowelTable['O'] = 1;
    vowelTable['U'] = 1;


    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (vowelTable[str[i]]) {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);
    return 0;
}
