#include <stdio.h>
#include <stdlib.h>

int sentinelSearch(int arr[], int n, int key) {
    int last = arr[n - 1];
    arr[n - 1] = key;

    int i = 0;
    while (arr[i] != key) {
        i++;
    }

    arr[n - 1] = last;

    if (i < n - 1 || arr[n - 1] == key) {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {101, 203, 345, 456, 567, 678, 789};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key=456;

    int index = sentinelSearch(arr, n, key);
    if (index != -1)
        printf("Customer ID %d found at index %d\n", key, index);
    else
        printf("Customer ID %d not found\n", key);
    return 0;
}
