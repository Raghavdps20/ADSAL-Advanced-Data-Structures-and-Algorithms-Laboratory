#include <stdio.h>
#include <stdlib.h>


int rbs(int arr[], int l, int h, int key) {

    if (l > h) {
        return -1;
    }

    int mid = (l + h) / 2;

    if (arr[mid] == key) {
        return mid;
    }

    else if (arr[mid] > key) {
        return rbs(arr, l, mid - 1, key);
    }
    else {
        return rbs(arr, mid + 1, h, key);
    }
}

int main() {

    int n = 10, key;
    int result;

    int arr[10] = {101,102,103,104,105,106,107,108,109,110};

    printf("Enter book ID: ");
    scanf("%d", &key);

    result = rbs(arr, 0, n - 1, key);

    if (result == -1) {
        printf("Book not found", key);
    } else {
        printf("Book found at index : %d", result);
    }

    return 0;
}
